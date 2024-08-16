#include "vignere.h"
#include <iostream>
#include <string>
#include <fstream>

Vignere::Vignere(const std::string &fileLocatio, const std::string &Key) : fileLocation(fileLocatio), PassKey(Key) {
    inputFile.open(fileLocation);
    if (!inputFile.is_open()) {
        throw std::runtime_error("File Not Opened");
    }
}

void Vignere::saveFile(const std::string &FinalText) {
    std::ofstream outputFile;
    outputFile.open(fileLocation, std::ios::out | std::ios::trunc);
    outputFile << FinalText;
    outputFile.close();
}

void Vignere::encryption() {
    std::string PlainText, CipherText;
    int i, j = 0;
    char a, b, c;

    while (getline(inputFile, PlainText)) {
        for (i = 0; i < PlainText.length(); i++) {
            a = PlainText[i];
            b = PassKey[j];
            char d = (a >= 'A' && a <= 'Z') ? 'A' : 'a';
            char e = (b >= 'A' && b <= 'Z') ? 'A' : 'a';

            if (a < d || a > d + 25) {
                CipherText.push_back(a);
                continue;
            }

            a -= d;
            b -= e;
            c = (abs((a + b)) % 26) + d;

            CipherText.push_back(c);

            j++;
            if (!PassKey[j]) {
                j = 0;
            }
        }
        CipherText.push_back('\n');
    }
    inputFile.close();
    saveFile(CipherText);
}

void Vignere::decryption() {
    std::string PlainText, CipherText;
    int i, j = 0;
    char a, b, c;

    while (getline(inputFile, CipherText)) {
        for (i = 0; i < CipherText.length(); i++) {
            a = CipherText[i];
            b = PassKey[j];
            char d = (a >= 'A' && a <= 'Z') ? 'A' : 'a';
            char e = (b >= 'A' && b <= 'Z') ? 'A' : 'a';

            if (a < d || a > d + 25) {
                PlainText.push_back(a);
                continue;
            }

            a -= d;
            b -= e;
            if ((int)a < (int)b) {
                c = (abs(26 + (a - b)) + d);
            } else {
                c = (abs((a - b)) % 26) + d;
            }

            PlainText.push_back(c);

            j++;
            if (!PassKey[j]) {
                j = 0;
            }
        }
        PlainText.push_back('\n');
    }
    inputFile.close();
    saveFile(PlainText);
}
