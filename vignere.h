//
//  vignere.h
//  FEDS
//
//  Created by rujan on 11/08/2024.
//
#include<iostream>
#ifndef vignere_h
#define vignere_h

//decryption
class vignere {

private:
std::string fileLocation;
std::ifstream inputFile;
std::string PassKey;
public:
    vignere(std::string fileLocatio, std::string Key){
                fileLocation = fileLocatio ;
               inputFile.open(fileLocation);
        if(!inputFile.is_open()){
            std::cout<<"File Not Opened";
        }
        PassKey = Key;
              
        };

    void saveFile(std::string FinalText)
        {
          
        std::ofstream outputFile;
        outputFile.open(this->fileLocation, std::ios::out | std::ios::trunc);
        outputFile<< FinalText;
        outputFile.close();
        
        }


    void  decryption(){
        
        
        
        std::string PlainText,CipherText;
      

            int i,j=0;
            char a,b,c;
        
        while (getline(inputFile, CipherText)){
           
        
            for(i=0;i<CipherText.length();i++){
              
                a=CipherText[i];
                b=PassKey[j];
                char d = (a >= 'A' && a <= 'Z') ? 'A' : 'a';
                char e = (b >= 'A' && b <= 'Z') ? 'A' : 'a';
                
                

                
                if (a < d || a > d + 25) {
                    
                    PlainText.push_back(a);
                    continue;
                }
             
                
               
                a-=d;
                b-=e;
           
                if((int)a<(int)b)    {
                    c=(abs(26+(a-b))+d);}
                
               else{
                    c=(abs((a-b))%26)+d;}
            
             
                PlainText.push_back(c);
             
                
                j++;
             
                if(!PassKey[j])
                { j=0;}
                
               
            }
          //  cout<<"help5\n";
         PlainText.push_back('\n');
        }
        
        inputFile.close();
        saveFile(PlainText);
    }
        
        //Encryption
        void encryption(){
         //   cout<<"Encryption:\n";
            std::string PlainText,CipherText;
          

                int i,j=0;
                char a,b,c;
            
            while (getline(inputFile, PlainText)){
               
            
                for(i=0;i<PlainText.length();i++){
                  
                    a=PlainText[i];
                    b=PassKey[j];
                    char d = (a >= 'A' && a <= 'Z') ? 'A' : 'a';
                    char e = (b >= 'A' && b <= 'Z') ? 'A' : 'a';
                    
                    

                  /*IF PRESEVE PUNCTUATION IS SELECTED*/
                    if (a < d || a > d + 25) {
                        
                        CipherText.push_back(a);
                        continue;
                    }
                 
                    
                   
                    a-=d;
                    b-=e;
               
                    
                   
                        c=(abs((a+b))%26)+d;
                
                 
                    CipherText.push_back(c);
                 
                    
                    j++;
                 
                    if(!PassKey[j])
                    { j=0;}
                    
                   
                }
              //  cout<<"help5\n";
             CipherText.push_back('\n');
            }
           
        /*    cout<<"PlainText:"<<PlainText<<"\nPassKey:"<<PassKey;
            cout<<"\nFinal-"<<CipherText<<endl;*/
            saveFile(CipherText);
        }

};
#endif /* vignere_h */
