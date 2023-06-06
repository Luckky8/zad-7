#include <iostream>
#include <fstream>
#include <vector>

class Piksel {
public:
    unsigned char r, g, b;

    Piksel(unsigned char red, unsigned char green, unsigned char blue)
        : r(red), g(green), b(blue) {}

    unsigned char& operator[](int index) {
        if (index == 0) return r;
        else if (index == 1) return g;
        else if (index == 2) return b;
        else throw std::out_of_range("Nieprawid³owy indeks piksela.");
    }
};

int main() {
    unsigned char charArray[] = { 123, 211, 222 };

    std::ofstream outputFile("plik.bin", std::ios::binary);
    if (outputFile.is_open()) {
        // Zapisz piksele do pliku
        outputFile.write(reinterpret_cast<const char*>(charArray), sizeof(unsigned char) * sizeof(charArray));

        // Zamykanie pliku
        outputFile.close();
        std::cout << "Tablica zapisana do pliku binarnego." << std::endl;
    }
    else {
        std::cout << "Nie mo¿na otworzyæ pliku." << std::endl;
    }

    return 0;
}