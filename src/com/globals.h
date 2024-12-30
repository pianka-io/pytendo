#ifndef pytendo_constants_h
#define pytendo_constants_h

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

typedef uint8_t byte;
typedef int8_t sbyte;
typedef uint16_t word;

bool is_flag_set(byte, byte);
byte set_flag(byte, byte);
byte clear_flag(byte, byte);

double get_time();

static const size_t CPU_MEMORY_SIZE = 0x10000;
static const size_t PPU_MEMORY_SIZE = 0x4000;
static const size_t PRG_ROM_OFFSET = 0x8000;
static const size_t PRG_RAM_BANK_SIZE = 0x4000;

static const word RESET_VECTOR = 0xFFFC;
static const word NMI_VECTOR = 0xFFFA;
static const word STACK_OFFSET = 0x01FF;

static const word NAME_TABLE_OFFSETS[] = {
    0x2000,
    0x2400,
    0x2800,
    0x2C00,
};
static const word PATTERN_TABLE_OFFSETS[] = {
        0x0000,
        0x1000,
};

static const byte CPU_STATUS_CARRY = 0b00000001;
static const byte CPU_STATUS_ZERO = 0b00000010;
static const byte CPU_STATUS_INTERRUPT = 0b00000100;
//static const byte CPU_STATUS_BCD = 0b00001000;
//static const byte CPU_STATUS_BREAK = 0b00010000;
//static const byte CPU_STATUS_UNUSED = 0b00100000;
static const byte CPU_STATUS_OVERFLOW = 0b01000000;
static const byte CPU_STATUS_NEGATIVE = 0b10000000;

static const word PPU_REGISTER_PPUCTRL = 0x2000;
static const word PPU_REGISTER_PPUMASK = 0x2001;
static const word PPU_REGISTER_PPUSTATUS = 0x2002;
static const word PPU_REGISTER_OAMADDR = 0x2003;
static const word PPU_REGISTER_OAMDATA = 0x2004;
static const word PPU_REGISTER_PPUSCROLL = 0x2005;
static const word PPU_REGISTER_PPUADDR = 0x2006;
static const word PPU_REGISTER_PPUDATA = 0x2007;
static const word PPU_REGISTER_OAMDMA = 0x2008;

static const byte PPUCTRL_BASE_NAME_TABLE = 0b00000011;
static const byte PPUCTRL_VRAM_INCREMENT = 0b00000100;
static const byte PPUCTRL_SPRITE_PATTERN_TABLE = 0b00001000;
static const byte PPUCTRL_BACKGROUND_PATTERN_TABLE = 0b00010000;
static const byte PPUCTRL_MASTER_SLAVE = 0b00100000;
static const byte PPUCTRL_VBLANK_NMI = 0b01000000;

static const byte PPUSTATUS_VBLANK = 0b10000000;

#endif