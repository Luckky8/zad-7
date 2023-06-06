#include <iostream>
#include <fstream>
#include <vector>

#include "piksel.hpp"

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