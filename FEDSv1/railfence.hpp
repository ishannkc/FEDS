#ifndef RAILFENCE_HPP
#define RAILFENCE_HPP

#include <string>

class RailFence {
private:
    std::string fileLocation;
    int depth;

    // Private helper methods for file operations
    void openFile(std::ifstream &file);
    void saveFile(const std::string &finalText);

public:
    // Constructor
    explicit RailFence(int depth) : depth(depth) {}

    // Set the file location
    void setFileLocation(const std::string &location) {
        fileLocation = location;
    }

    // Methods for encryption and decryption with string input
    std::string encrypt(const std::string &plainText);
    std::string decrypt(const std::string &cipherText);
};

#endif // RAILFENCE_HPP
