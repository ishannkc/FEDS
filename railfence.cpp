#include<railfence.h>
#include<iostream>
#include<fstream>

RailFence::RailFence(const std::string& fileLocation, int key) {
    this->fileLocation = fileLocation;
    inputFile.open(this->fileLocation);

    if (!inputFile.is_open()) {
        std::cout << "File Not Opened" << std::endl;
    }

    Depth = key;
}

void RailFence::saveFile(const std::string& finalText) {
    std::ofstream outputFile;
    outputFile.open(this->fileLocation, std::ios::out | std::ios::trunc);

    if (outputFile.is_open()) {
        outputFile << finalText;
        outputFile.close();
    } else {
        std::cout << "Failed to save file." << std::endl;
    }
}

void RailFence::encrypt() {
    std::string plainText, cipherText;
    int nrow = Depth;

    while (getline(inputFile, plainText)) {
        int ncol = static_cast<int>(plainText.length());
        char rail_matrix[nrow][ncol];

        // Filling the rail matrix with '^' symbol
        for (int i = 0; i < nrow; i++) {
            for (int j = 0; j < ncol; j++) {
                rail_matrix[i][j] = '^';
            }
        }

        // Setting direction and filling the rail matrix
        bool downward = false;
        int r = 0, c = 0;

        for (int i = 0; i < plainText.length(); i++) {
            if (r == 0 || r == Depth - 1)
                downward = !downward;

            rail_matrix[r][c++] = plainText[i];
            downward ? r++ : r--;
        }

        // Generating ciphertext from the rail matrix
        for (int i = 0; i < nrow; i++) {
            for (int j = 0; j < ncol; j++) {
                if (rail_matrix[i][j] != '^') {
                    cipherText.push_back(rail_matrix[i][j]);
                }
            }
        }
        cipherText.push_back('\n');
    }

    saveFile(cipherText);
}

void RailFence::decode() {
    std::string cipherText = "ahatak  hskrau";
    std::string plainText;
    int nrow = Depth;
    int ncol = static_cast<int>(cipherText.length());

    char rail_matrix[nrow][ncol];

    // Filling the rail matrix with '^' symbol
    for (int i = 0; i < nrow; i++) {
        for (int j = 0; j < ncol; j++) {
            rail_matrix[i][j] = '^';
        }
    }

    // Setting direction and marking positions with '~'
    bool downward = true;
    int r = 0, c = 0;

    for (int i = 0; i < cipherText.length(); i++) {
        if (r == 0) downward = true;
        if (r == nrow - 1) downward = false;

        rail_matrix[r][c++] = '~';
        downward ? r++ : r--;
    }

    // Filling rail matrix with cipherText characters
    int indx = 0;
    for (int i = 0; i < nrow; i++) {
        for (int j = 0; j < ncol; j++) {
            if (rail_matrix[i][j] == '~' && indx < cipherText.length()) {
                rail_matrix[i][j] = cipherText[indx++];
            }
        }
    }

    // Reading rail matrix to generate plaintext
    r = 0;
    c = 0;
    downward = true;
    for (int i = 0; i < cipherText.length(); i++) {
        if (r == 0) downward = true;
        if (r == nrow - 1) downward = false;

        if (rail_matrix[r][c] != '^') {
            plainText.push_back(rail_matrix[r][c++]);
        }
        downward ? r++ : r--;
    }

    saveFile(plainText);
}
