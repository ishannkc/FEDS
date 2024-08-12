//
//  railfence.hpp
//  FEDS
//
//  Created by rujan on 09/08/2024.
//
#include<fstream>
#include <iostream>
#ifndef railfence_hpp
#define railfence_hpp


class RailFence{
    
        private:
        std::string fileLocation;
        std::ifstream inputFile;
        int Depth;
        
        public:
    
    RailFence(std::string fileLocatio, int Key){
        fileLocation = fileLocatio ;
        inputFile.open(fileLocation);
        if(!inputFile.is_open()){
            std::cout<<"File Not Opened";
        }
        
        Depth=Key;
    };
    
    void saveFile(std::string FinalText)
    {
        
        std::ofstream outputFile;
        outputFile.open(this->fileLocation, std::ios::out | std::ios::trunc);
        outputFile<< FinalText;
        outputFile.close();
        
    }
    void decode(){
        std::string CipherText,plaintext;
        int nrow= Depth,ncol;
   
        CipherText="ahatak  hskrau";
       // while (getline(inputFile, CipherText)){
            
            
            ncol= (int)CipherText.length();
            char rail_matrix[nrow][ncol];
                        
            // filling the rail matrix with ^ symbol
            for (int i=0; i < nrow; i++) {
                for (int j = 0; j < ncol; j++){
                    rail_matrix[i][j] ='^';
                }
            }
            // to find the direction
            bool downward=true;
            int r = 0, c= 0;
            
            // marking  the places with '~'
            for (int i=0; i < CipherText.length(); i++) {
                // check the direction of flow
                if (r == 0)
                    downward = true;
                if (r == Depth-1)
                    downward = false;
                // place the marker
                rail_matrix[r][c++] = '~';
                
                // find the next row using direction flag
                downward?r++ : r--;
            }
            
            // filling  the rail matrix
            int indx = 0;
            for (int i=0; i<Depth; i++) {
                for (int j=0; j<CipherText.length(); j++) {
                    if (rail_matrix[i][j] == '~' && indx<CipherText.length())
                        rail_matrix[i][j] = CipherText[indx++];
                }
            }
            
            
            //  reading  the matrix in zig-zag order to get the plaintext
            r = 0; c = 0;
            for (int i=0; i< CipherText.length(); i++)
            {
                // check the direction of flow
                if (r == 0)
                    downward = true;
                if (r == Depth-1)
                    downward = false;
                
                // checking  the marker
                if (rail_matrix[r][c] != '~')
                    plaintext.push_back(rail_matrix[r][c++]); //appending
                // finding  the next row using direction flag
                downward?r++: r--;
            }
            
            plaintext.push_back('\n');
      //  }
        saveFile(plaintext);
    }
    
    
    
    void encrypt(){
        // creating a matrix to encrypt msg with key
        // key = rows , length of msg=no. of characters = columns
    std::string plainText, cipherText;
        int nrow= Depth;
        while (getline(inputFile, plainText)){
            
            int ncol= (int)plainText.length();
            char rail_matrix[nrow][ncol];
            
            // filling the rail matrix with ^ symbol
            for (int i=0; i < nrow; i++) {
                for (int j = 0; j < ncol; j++){
                    rail_matrix[i][j] ='^';
                }
            }
            // to find the direction
            bool downward = false;
            int r = 0, c = 0;
            
            
            for (int i=0; i < plainText.length(); i++) {
                // checking  the direction of flow
                // reverse the direction if the top or bottom rail is just filled
                if (r == 0 || r == Depth-1)
                    downward = !downward;
                
                // filling  with  characters in the plaintext
                rail_matrix[r][c++] = plainText[i];
                
                // find the next row using direction
                downward ?r++ : r--;
            }
            //to print the rail matrix
        /*    for (int i=0; i < nrow; i++) {
                for (int j = 0; j < ncol; j++){
                    cout<< rail_matrix[i][j]<<"  ";
                }
                cout<<"\n";
            }*/
            // generating  the ciphertext using the rail_matrix
            
            for (int i=0; i < nrow; i++) {
                for (int j=0; j < plainText.length(); j++) {
                    if (rail_matrix[i][j]!='^')
                        cipherText.push_back(rail_matrix[i][j]); //appending a character
                }
           
            }
            cipherText.push_back('\n');
           
        }
        
        saveFile(cipherText);
    }
    
    
};
#endif /* railfence_hpp */
