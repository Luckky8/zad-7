#include <iostream>
#include <fstream>
#include <vector>

#include "piksel.hpp"

Piksel::Piksel(unsigned char red, unsigned char green, unsigned char blue)
    : r(red), g(green), b(blue) {}

unsigned char& Piksel::operator[](int index) {
    if (index == 0) return r;
    else if (index == 1) return g;
    else if (index == 2) return b;
    else throw std::out_of_range("Nieprawid³owy indeks piksela.");
}