#ifndef RAILFENCE_HPP
#define RAILFENCE_HPP

#include <string>
#include <fstream>


class RailFence {
private:
    std::string fileLocation;
    std::ifstream inputFile;
    int Depth;

    void saveFile(const std::string& finalText);

public:
    RailFence(const std::string& fileLocation, int key);

    void encrypt();
    void decode();
};

#endif // RAILFENCE_HPP
