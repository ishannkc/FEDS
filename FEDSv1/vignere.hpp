#ifndef VIGENERE_H
#define VIGENERE_H

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

class Vigenere {
private:
    std::string fileLocation;
    std::ifstream inputFile;
    std::string passKey;
    int ch = 0;

    void openFile() {
        inputFile.open(fileLocation);
        if (!inputFile.is_open()) {
            std::cerr << "File Not Opened" << std::endl;
        }
    }

    void saveFile(const std::string &finalText) {
        std::ofstream outputFile(fileLocation, std::ios::out | std::ios::trunc);
        if (!outputFile.is_open()) {
            std::cerr << "File Not Saved" << std::endl;
        }
        outputFile << finalText;
        outputFile.close();
    }

public:
    Vigenere(const std::string &fileLoc, const std::string &key, int choice)
        : fileLocation(fileLoc), passKey(key), ch(choice) {}

    void decryption() {
        std::string plainText, cipherText;
        openFile();

        int i, j = 0;
        char a, b, c;

        while (getline(inputFile, cipherText)) {
            for (i = 0; i < cipherText.length(); i++) {
                a = cipherText[i];
                b = passKey[j];
                char d = (a >= 'A' && a <= 'Z') ? 'A' : 'a';
                char e = (b >= 'A' && b <= 'Z') ? 'A' : 'a';

                if (a < d || a > d + 25) {
                    plainText.push_back(a);
                    continue;
                }

                a -= d;
                b -= e;

                if ((int)a < (int)b) {
                    c = (abs(26 + (a - b)) % 26) + d;
                } else {
                    c = (abs(a - b) % 26) + d;
                }

                plainText.push_back(c);
                j++;

                if (!passKey[j]) {
                    j = 0;
                }
            }
            plainText.push_back('\n');
        }

        inputFile.close();
        saveFile(plainText);
    }

    void encryption() {
        std::string plainText, cipherText;
        openFile();

        int i, j = 0;
        char a, b, c;

        while (getline(inputFile, plainText)) {
            for (i = 0; i < plainText.length(); i++) {
                a = plainText[i];
                b = passKey[j];
                char d = (a >= 'A' && a <= 'Z') ? 'A' : 'a';
                char e = (b >= 'A' && b <= 'Z') ? 'A' : 'a';

                if (ch == 1 || ch == 3) {
                    if (a < d || a > d + 25) {
                        cipherText.push_back(a);
                        continue;
                    }
                }

                a -= d;
                b -= e;

                if (ch == 2 || ch == 3) {
                    c = (abs(a + b) % 26) + d;
                } else {
                    c = (abs(a + b) % 26) + d;
                }

                cipherText.push_back(c);
                j++;

                if (!passKey[j]) {
                    j = 0;
                }
            }
            cipherText.push_back('\n');
        }

        inputFile.close();
        saveFile(cipherText);
    }
};

#endif /* VIGENERE_H */
