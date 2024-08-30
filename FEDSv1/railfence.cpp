#include "railfence.hpp"
#include <fstream>
#include <iostream>
#include <string>

// Opens the input file located at fileLocation
// If the file cannot be opened, it prints an error message
void RailFence::openFile(std::ifstream &file) {
    file.open(fileLocation);
    if (!file.is_open()) {
        std::cerr << "File Not Opened" << std::endl;
    }
}

// Saves the final encrypted or decrypted text to the file at fileLocation
// If the file cannot be saved, it prints an error message
void RailFence::saveFile(const std::string &finalText) {
    std::ofstream outputFile(fileLocation, std::ios::out | std::ios::trunc);
    if (!outputFile.is_open()) {
        std::cerr << "File Not Saved" << std::endl;
    }
    outputFile << finalText;
    outputFile.close();
}

// Encrypts the input plainText using the Rail Fence Cipher technique
// Returns the encrypted text (cipherText)
std::string RailFence::encrypt(const std::string &plainText) {
    std::string cipherText;          // String to store the resulting cipher text
    int nrow = depth;                // Number of rows in the rail matrix, equal to the depth

    // The number of columns in the matrix is equal to the length of the plain text
    int ncol = static_cast<int>(plainText.length());

    // Declare a 2D array (railMatrix) to simulate the rail structure
    char railMatrix[nrow][ncol];

    // Initialize the rail matrix with a placeholder character '^'
    for (int i = 0; i < nrow; i++) {
        for (int j = 0; j < ncol; j++) {
            railMatrix[i][j] = '^';
        }
    }

    // Fill the rail matrix in a zig-zag pattern
    bool downward = false;  // Direction flag, true for down, false for up
    int r = 0, c = 0;       // r is the current row, c is the current column
    for (int i = 0; i < plainText.length(); i++) {
        // Change direction when hitting the top or bottom rail
        if (r == 0 || r == depth - 1)
            downward = !downward;

        // Place the character in the current position in the matrix
        railMatrix[r][c++] = plainText[i];

        // Move to the next row in the appropriate direction
        downward ? r++ : r--;
    }

    // Read the characters in the matrix row by row to create the cipher text
    for (int i = 0; i < nrow; i++) {
        for (int j = 0; j < ncol; j++) {
            // Only add the characters that were placed in the matrix
            if (railMatrix[i][j] != '^')
                cipherText.push_back(railMatrix[i][j]);
        }
    }

    // Return the final encrypted text
    return cipherText;
}

// Decrypts the input cipherText using the Rail Fence Cipher technique
// Returns the decrypted text (plainText)
std::string RailFence::decrypt(const std::string &cipherText) {
    std::string plainText;           // String to store the resulting plain text
    int nrow = depth;                // Number of rows in the rail matrix, equal to the depth

    // The number of columns in the matrix is equal to the length of the cipher text
    int ncol = static_cast<int>(cipherText.length());

    // Declare a 2D array (railMatrix) to simulate the rail structure
    char railMatrix[nrow][ncol];

    // Initialize the rail matrix with a placeholder character '^'
    for (int i = 0; i < nrow; i++) {
        for (int j = 0; j < ncol; j++) {
            railMatrix[i][j] = '^';
        }
    }

    // First, mark the positions in the matrix where the cipher text characters will go
    bool downward = true;  // Direction flag, true for down, false for up
    int r = 0, c = 0;      // r is the current row, c is the current column
    for (int i = 0; i < cipherText.length(); i++) {
        // Change direction when hitting the top or bottom rail
        if (r == 0)
            downward = true;
        if (r == depth - 1)
            downward = false;

        // Mark the current position in the matrix with a placeholder '~'
        railMatrix[r][c++] = '~';

        // Move to the next row in the appropriate direction
        downward ? r++ : r--;
    }

    // Now, place the characters of the cipher text into the marked positions in the matrix
    int indx = 0;  // Index to track the current character in the cipher text
    for (int i = 0; i < depth; i++) {
        for (int j = 0; j < cipherText.length(); j++) {
            // Only place characters where we marked with '~'
            if (railMatrix[i][j] == '~' && indx < cipherText.length())
                railMatrix[i][j] = cipherText[indx++];
        }
    }

    // Read the matrix in a zig-zag order to reconstruct the plain text
    r = 0; c = 0;  // Reset row and column counters
    for (int i = 0; i < cipherText.length(); i++) {
        // Change direction when hitting the top or bottom rail
        if (r == 0)
            downward = true;
        if (r == depth - 1)
            downward = false;

        // Add the character from the matrix to the plain text
        if (railMatrix[r][c] != '~')
            plainText.push_back(railMatrix[r][c++]);

        // Move to the next row in the appropriate direction
        downward ? r++ : r--;
    }

    // Return the final decrypted text
    return plainText;
}
