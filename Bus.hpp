#pragma once
#include <cstdint>
#include "CPU.hpp"

class Bus {
    public:
        Bus();
        ~Bus();
        CPU cpu;
        uint8_t memory[0x10000];
        void write(uint16_t address, uint8_t data);
        bool read(uint16_t address);
};