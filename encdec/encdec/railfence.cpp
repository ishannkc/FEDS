#include "railfence.hpp"
#include <fstream>
#include <iostream>
#include <string>

void RailFence::openFile(std::ifstream &file) {
    file.open(fileLocation);
    if (!file.is_open()) {
        std::cerr << "File Not Opened" << std::endl;
    }
}

void RailFence::saveFile(const std::string &finalText) {
    std::ofstream outputFile(fileLocation, std::ios::out | std::ios::trunc);
    if (!outputFile.is_open()) {
        std::cerr << "File Not Saved" << std::endl;
    }
    outputFile << finalText;
    outputFile.close();
}

std::string RailFence::encrypt(const std::string &plainText) {
    std::string cipherText;
    int nrow = depth;

    int ncol = static_cast<int>(plainText.length());
    char railMatrix[nrow][ncol];

    // Fill rail matrix with '^'
    for (int i = 0; i < nrow; i++) {
        for (int j = 0; j < ncol; j++) {
            railMatrix[i][j] = '^';
        }
    }

    // Find direction
    bool downward = false;
    int r = 0, c = 0;
    for (int i = 0; i < plainText.length(); i++) {
        if (r == 0 || r == depth - 1)
            downward = !downward;
        railMatrix[r][c++] = plainText[i];
        downward ? r++ : r--;
    }

    // Generate cipher text
    for (int i = 0; i < nrow; i++) {
        for (int j = 0; j < ncol; j++) {
            if (railMatrix[i][j] != '^')
                cipherText.push_back(railMatrix[i][j]);
        }
    }
    return cipherText;
}

std::string RailFence::decrypt(const std::string &cipherText) {
    std::string plainText;
    int nrow = depth, ncol = static_cast<int>(cipherText.length());

    char railMatrix[nrow][ncol];

    // Fill rail matrix with '^'
    for (int i = 0; i < nrow; i++) {
        for (int j = 0; j < ncol; j++) {
            railMatrix[i][j] = '^';
        }
    }

    // Find direction
    bool downward = true;
    int r = 0, c = 0;
    for (int i = 0; i < cipherText.length(); i++) {
        if (r == 0)
            downward = true;
        if (r == depth - 1)
            downward = false;
        railMatrix[r][c++] = '~';
        downward ? r++ : r--;
    }

    // Fill rail matrix with cipher text
    int indx = 0;
    for (int i = 0; i < depth; i++) {
        for (int j = 0; j < cipherText.length(); j++) {
            if (railMatrix[i][j] == '~' && indx < cipherText.length())
                railMatrix[i][j] = cipherText[indx++];
        }
    }

    // Read rail matrix in zig-zag order
    r = 0; c = 0;
    for (int i = 0; i < cipherText.length(); i++) {
        if (r == 0)
            downward = true;
        if (r == depth - 1)
            downward = false;
        if (railMatrix[r][c] != '~')
            plainText.push_back(railMatrix[r][c++]);
        downward ? r++ : r--;
    }
    return plainText;
}
