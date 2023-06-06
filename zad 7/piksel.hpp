#include <iostream>
#include <fstream>
#include <vector>


class Piksel {
public:
    unsigned char r, g, b;

    Piksel(unsigned char red, unsigned char green, unsigned char blue);
        unsigned char& operator[](int index);
};