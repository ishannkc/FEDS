#ifndef RAILFENCE_HPP
#define RAILFENCE_HPP

#include <string>

class RailFence {
private:
    std::string fileLocation; // Stores the file location for encryption/decryption
    int depth;                // Depth of the rail fence (number of rails)

    // Helper methods to handle file operations
    void openFile(std::ifstream &file);
    void saveFile(const std::string &finalText);

public:
    // Constructor to initialize the depth
    explicit RailFence(int depth) : depth(depth) {}

    // Set the file location
    void setFileLocation(const std::string &location) {
        fileLocation = location;
    }

    // Methods to perform encryption and decryption
    std::string encrypt(const std::string &plainText);
    std::string decrypt(const std::string &cipherText);
};

#endif // RAILFENCE_HPP
