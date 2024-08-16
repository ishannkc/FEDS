#ifndef VIGNERE_H
#define VIGNERE_H

#include <string>
#include <fstream>

class Vignere {
private:
    std::string fileLocation;
    std::ifstream inputFile;
    std::string PassKey;

public:
    Vignere(const std::string &fileLocatio, const std::string &Key);
    void saveFile(const std::string &FinalText);
    void encryption();
    void decryption();
};

#endif // VIGNERE_H
