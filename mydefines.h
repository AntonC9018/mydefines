#pragma once
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

#define local_persistent static
typedef uint64_t u64; 
typedef uint32_t u32; 
typedef uint16_t u16; 
typedef uint8_t u8; 
typedef int64_t s64; 
typedef int32_t s32; 
typedef int16_t s16; 
typedef int8_t s8; 

#define report_error(string, ...) fprintf((stderr), (string), ## __VA_ARGS__), exit(-1)
#define countof(arr) sizeof((arr)) / sizeof((arr)[0])