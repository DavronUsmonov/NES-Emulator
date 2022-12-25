#include "Bus.hpp"

Bus::Bus() {
    for(auto &i : memory) i = 0x00;
    cpu.ConnectBus(this);
}

Bus::~Bus() {

}

void Bus::write(uint16_t address, uint8_t data) {
    if(address >= 0x0000 && address <= 0xFFFF) memory[address] = data;
} 
uint8_t Bus::read(uint16_t address) {
    if(address >= 0x0000 && address <= 0xFFFF) return memory[address];
    return 0x00;
}