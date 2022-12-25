#pragma once
#include <cstdint>
#include "Bus.hpp"

class CPU {
    private:
        uint16_t pc{}; //program counter
        uint8_t sp{}; //stack pointer
        //Status Flags
        uint8_t C : 1;
        uint8_t Z : 1;
        uint8_t I : 1;
        uint8_t D : 1;
        uint8_t V : 1;
        uint8_t N : 1;
        //Registers
        uint8_t A{};
        uint8_t X{};
        uint8_t Y{};
        Bus *bus{};
    public:
        CPU();
        ~CPU();
        void ConnectBus(Bus *n) { bus = n; }
    private:
        uint8_t read(uint16_t address);
        void write(uint16_t address, uint8_t data);

};