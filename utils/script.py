import os
from PIL import Image
import numpy as np
import tensorflow as tf
import matplotlib.pyplot as plt

cmd = "bash image-convert.sh "

def getNames() :
    fs = []
    for (dirpath, dirnames, filenames) in os.walk(".") :
        fs.extend(filenames)
        break
    return fs

def f(filename) :
    i = 0
    while not (filename[i] >= "0" and filename[i] <= "9") :
        i += 1
    return filename[:i]

def reverse(a) :
    for i in range(a.shape[0]) :
        for j in range(a.shape[1]) :
            a[i][j][0], a[i][j][2] = a[i][j][2], a[i][j][0]
    return a

def hexNum(a) :
    if a == 10 : return "a"
    if a == 11 : return "b"
    if a == 12 : return "c"
    if a == 13 : return "d"
    if a == 14 : return "e"
    if a == 15 : return "f"
    return str(a)

def hexDump(a) :
    return "0x" + hexNum(int(a) // 16) + hexNum(int(a) % 16)

arr = []

def createHFiles(filenames, doChange = False, size1 = None, size2 = None, levelMask = 540) :
    if doChange and (size1 == None or size2 == None) :
        print("You need to specify 2 size arguments if you want to change size of the matrix")
    for filename in filenames:
        if filename[-4:] == ".jpg" :
            im = np.array(Image.open(filename))
            shape = im.shape
            im = reverse(im)
            if not doChange : 
                size1 = shape[0]
                size2 = shape[1]
            im = tf.image.resize(im, (size1, size2)).numpy()
            with open(filename[:-4] + ".h", 'w') as f :
                f.write(f"#ifndef {filename[:-4].upper()}_H\n#define {filename[:-4].upper()}_H\n#include <types.h>\nuint8_t {filename[:-4]}[{size1} * {size2} * 3] = ")
                f.write("{")
                for j in range(size1) :
                    for i in range(size2) :
                        f.write(hexDump(im[j][i][0]))
                        f.write(",")
                        f.write(hexDump(im[j][i][1]))
                        f.write(",")
                        f.write(hexDump(im[j][i][2]))
                        f.write(",")
                f.write("};\n#endif")
            mask = np.ndarray((size1, size2, 3))
            with open(filename[:-4] + "_bitmask" + ".h", 'w') as f :
                f.write(f"#ifndef {filename[:-4].upper()}_BITMASK_H\n#define {filename[:-4].upper()}_BITMASK_H\n#include <types.h>\nuint8_t {filename[:-4]}_bitmask[{size1} * {size2} * 3] = ")
                f.write("{")
                for i in range(size1) :
                    for j in range(size2) :
                        if im[i][j][0] + im[i][j][1] + im[i][j][2] > levelMask :
                            f.write("0x0,0x0,0x0,")
                            mask[i][j][0], mask[i][j][1], mask[i][j][2] = 0, 0, 0
                        else :
                            f.write("0xff,0xff,0xff,")
                            mask[i][j][0], mask[i][j][1], mask[i][j][2] = 255, 255, 255
                f.write("};\n#endif")
            plt.imshow(mask)
            plt.show()
            image = Image.fromarray(im.astype('uint8'), 'RGB')
            image.save(filename)


def use_script() :
    i = 0
    for filename in getNames() : 
        if filename[-4:] == ".jpg" :
            name = filename[:-4]
            command = cmd + filename + " " + name + " " + str(arr[i][1]) + " " + str(arr[i][0])
            print(command)
            os.system(command)   
            i += 1    

def clear() :
    for filename in getNames() :
        if filename[-3:-1] == ".h" :
            with open(filename, 'r') as f :
                text = f.read()
                f1 = open(filename[:-1], 'w')
                f1.write(text)
            os.remove(filename)
        
    