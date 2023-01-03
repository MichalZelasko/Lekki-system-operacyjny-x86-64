#ifndef __PORT_H
#define __PORT_H
#include <types.h>

void port_write8 (uint16_t port, uint8_t data);
void port_write16(uint16_t port, uint16_t data);
void port_write32(uint16_t port, uint32_t data);
void port_slow_write8 (uint16_t port, uint8_t data);
void port_slow_write16(uint16_t port, uint16_t data);
void port_slow_write32(uint16_t port, uint32_t data);

uint8_t port_read8(uint16_t port);
uint16_t port_read16(uint16_t port);
uint32_t port_read32(uint16_t port);

#endif