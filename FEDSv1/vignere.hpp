#ifndef VIGENERE_H
#define VIGENERE_H

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

// IF PRESERVE PUNCTUATION IS SELECTED, ch=1; IF PRESERVE CASE IS SELECTED, ch=2; IF BOTH ARE SELECTED, ch=3.

class Vigenere {
private:
    std::string fileLocation;  // Stores the file path
    std::ifstream inputFile;   // Input file stream to read from the file
    std::string passKey;       // Stores the encryption/decryption key
    int ch = 0;                // Choice parameter to handle punctuation and case

    // Function to open the input file
    void openFile() {
        inputFile.open(fileLocation);  // Open the file at the specified location
        if (!inputFile.is_open()) {    // Check if the file is successfully opened
            std::cerr << "File Not Opened" << std::endl;  // Display an error message if not
        }
    }

    // Function to save the final text (encrypted or decrypted) to the file
    void saveFile(const std::string &finalText) {
        // Open the file in write mode, truncating the existing content
        std::ofstream outputFile(fileLocation, std::ios::out | std::ios::trunc);
        if (!outputFile.is_open()) {  // Check if the file is successfully opened
            std::cerr << "File Not Saved" << std::endl;  // Display an error message if not
        }
        outputFile << finalText;  // Write the final text to the file
        outputFile.close();  // Close the file after writing
    }

public:
    // Constructor to initialize the file location, key, and choice
    Vigenere(const std::string &fileLoc, const std::string &key, int choice)
        : fileLocation(fileLoc), passKey(key), ch(choice) {}

    // Function to decrypt the content of the file using the Vigenère cipher
    void decryption() {
        std::string plainText, cipherText;  // Initialize strings to hold the plaintext and ciphertext
        openFile();  // Open the input file

        int i, j = 0;  // Index variables for iterating through the text and key
        char a, b, c;  // Variables to hold characters from the text and key, and the result

        // Read the file line by line
        while (getline(inputFile, cipherText)) {
            for (i = 0; i < cipherText.length(); i++) {  // Loop through each character in the line
                a = cipherText[i];
                b = passKey[j];
                char d = (a >= 'A' && a <= 'Z') ? 'A' : 'a';
                char e = (b >= 'A' && b <= 'Z') ? 'A' : 'a';

                // Handle non-alphabetic characters
                if (ch == 1 || ch == 3) {
                    if (a < d || a > d + 25) {
                        plainText.push_back(a);
                        continue;
                    }
                } else {
                    if (a < d || a > d + 25) {
                        continue;
                    }
                }

                a -= d;
                b -= e;

                // Decrypt the character using the Vigenère cipher formula
                if ((int)a < (int)b) {
                    c = (abs(26 + (a - b)) % 26) + d;
                } else {
                    c = (abs(a - b) % 26) + d;
                }

                plainText.push_back(c);  // Add the decrypted character to the plaintext
                j++;  // Move to the next character in the key

                // Reset the key index if the end of the key is reached
                if (!passKey[j]) {
                    j = 0;
                }
            }
            plainText.push_back('\n');  // Add a newline character at the end of each line
        }

        inputFile.close();  // Close the input file
        saveFile(plainText);  // Save the decrypted text back to the file
    }

    // Function to encrypt the content of the file using the Vigenère cipher
    void encryption() {
        std::string plainText, cipherText;  // Initialize strings to hold the plaintext and ciphertext
        openFile();  // Open the input file

        int i, j = 0;  // Index variables for iterating through the text and key
        char a, b, c;  // Variables to hold characters from the text and key, and the result

        // Read the file line by line
        while (getline(inputFile, plainText)) {
            for (i = 0; i < plainText.length(); i++) {  // Loop through each character in the line
                a = plainText[i];
                b = passKey[j];
                char d = (a >= 'A' && a <= 'Z') ? 'A' : 'a';
                char e = (b >= 'A' && b <= 'Z') ? 'A' : 'a';

                // Handle non-alphabetic characters if preserving punctuation
                if (ch == 1 || ch == 3) {
                    if (a < d || (a > d + 25)) {
                        cipherText.push_back(a);
                        continue;
                    }
                } else {
                    if (a < d || (a > d + 25)) {
                        continue;
                    }
                }

                a -= d;
                b -= e;

                // Encrypt the character using the Vigenère cipher formula
                if (!(ch == 2 || ch == 3)) {
                    d = 97;  // Force lowercase if not preserving case
                }
                c = (abs(a + b) % 26) + d;

                cipherText.push_back(c);  // Add the encrypted character to the ciphertext
                j++;  // Move to the next character in the key

                // Reset the key index if the end of the key is reached
                if (!passKey[j]) {
                    j = 0;
                }
            }
            cipherText.push_back('\n');  // Add a newline character at the end of each line
        }

        inputFile.close();  // Close the input file
        saveFile(cipherText);  // Save the encrypted text back to the file
    }
};

#endif /* VIGENERE_H */
