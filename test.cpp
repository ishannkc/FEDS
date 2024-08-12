//
//  test.cpp
//  FEDS
//
//  Created by rujan on 10/08/2024.
//

#include "test.hpp"
#include<fstream>
#include<iostream>
using namespace std;
/*
int main()
{
    std::string fileLocation;
    std::ifstream inputFile;
    inputFile.open("/Users/rujan/Documents/defile.txt");
    std::string PassKey="lemon";
    
    
    
    
    std::cout<<"Decryption\n";
    std::string PlainText,CipherText;
  //  cout<<"help\n";

        int i,j=0,d=97,e=97;
        char a,b,c;
    
    while (getline(inputFile, CipherText)){
       
       // cout<<"help2";
        //cout<<CipherText.length();
        for(i=0;i<CipherText.length();i++){
          
            a=CipherText[i];
            b=PassKey[j];
            
            if(a>=65 && a<=90) {d=65;}
            else{ d=97;}
            if(b>=65 && b<=90) {e=65;}
            else{ e=97;}
            
            //tala ko comment ko line haru causing infinite loop for some reason

            
       
            if (a < d || a > d + 25) {
                
                PlainText.push_back(a);
                continue;
            }
         //   SPACE CHECK  if(a == ' ') {  CipherText.push_back(' ');continue;}
            
           // cout<<i;
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
        cout<<"help5\n";
      ONLY IF PRESERVE PUNCTUATION IS SELECTED    PlainText.push_back('\n');
    }
    
    inputFile.close();
    cout<<"PlainText:"<<PlainText<<"\nPassKey:"<<PassKey;
    cout<<"\nFinal-"<<CipherText<<endl;
}
*/



/*
 vignere ko code
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
           
         ofstream outputFile;
         outputFile.open(this->fileLocation, ios::out | ios::trunc);
         outputFile<< FinalText;
         outputFile.close();
         
         }
 
 
     void  decryption(){
         
         
         std::cout<<"Decryption\n";
         std::string PlainText,CipherText;
       //  cout<<"help\n";

             int i,j=0;
             char a,b,c;
         
         while (getline(inputFile, CipherText)){
            
            // cout<<"help2";
             //cout<<CipherText.length();
             for(i=0;i<CipherText.length();i++){
               
                 a=CipherText[i];
                 b=PassKey[j];
                 char d = (a >= 'A' && a <= 'Z') ? 'A' : 'a';
                 char e = (b >= 'A' && b <= 'Z') ? 'A' : 'a';
                 
                 //tala ko comment ko line haru causing infinite loop for some reason

                 
                 if (a < d || a > d + 25) {
                     
                     PlainText.push_back(a);
                     continue;
                 }
              //   *SPACE CHECK / if(a == ' ') {  CipherText.push_back(' ');continue;}
                 
                // cout<<i;
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
             cout<<"help5\n";
           ONLY IF PRESERVE PUNCTUATION IS SELECTED /     PlainText.push_back('\n');
         }
         
         inputFile.close();
         cout<<"PlainText:"<<PlainText<<"\nPassKey:"<<PassKey;
         cout<<"\nFinal-"<<CipherText<<endl;
        // saveFile(PlainText);
     }
         
         //Encryption
         void encryption(){
             cout<<"Encryption:\n";
             std::string PlainText,CipherText;
           //  cout<<"help\n";

                 int i,j=0;
                 char a,b,c;
             
             while (getline(inputFile, PlainText)){
                 // cout<<"help2";
                 //cout<<CipherText.length();
                 for(i = 0 ; i < PlainText.length() ; i++){
                     
                     a=PlainText[i];
                     b=PassKey[j];
                     char d = (a >= 'A' && a <= 'Z') ? 'A' : 'a';
                     char e = (b >= 'A' && b <= 'Z') ? 'A' : 'a';
                     
                     //tala ko comment ko line haru causing infinite loop for some reason

                     if(a == ' ') {  CipherText.push_back(a);continue;}
                     
                     
             /IF PRESERVE PUNCTUATION IS SELECTED/
              if (a < d || a > d + 25) {
                         
                         PlainText.push_back(a);
                         continue;}
                     
             /IF PRESERVE PUNCTUATION IS NOT SELECTED/
                     if (a < d || a > d + 25) {
                                continue;}
                     
                     
                     
                     //tala ko comment ko line haru causing infinite loop for some reason
                     
                    //    if( ((int)a-(int)d)<0 || (((int)a-(int)d)) > 25 ) {  CipherText.append(1,a);continue;}
                     
                     //   /SPACE CHECK / if(a == ' ') {  CipherText.append(1,' ');continue;}
                     //  /  //IF  INCLUDE COMMAS  SELECTED / if( !((a>=65 &&a<=90) ||(a>=97 &&a<=122))) {  CipherText.append(1,a);continue;}
                     /IF NO INCLUDE COMMAS SELECTED  if( !((a>=65 &&a<=90) ||(a>=97 &&a<=122))) { continue;}/
                     
                     a-=d;
                     b-=e;
                     
                     
                     c=(abs((a-b))%26)+d;
                     
                     CipherText.push_back(c);
                     
                     j++;
                     if(!PassKey[j])
                     {  j=0;}
                 }
             }
             CipherText.append(1,'\n');

             cout<<"PlainText:"<<PlainText<<"\nPassKey:"<<PassKey;
             cout<<"\nFinal-"<<CipherText<<endl;
             saveFile(CipherText);
         }
 
};
 */
void decode(){
    int d=5;
    
    int i,j,c=0;
    
    string plainText="aakash thakur",CipherText;
    int rail_matrix[d][plainText.length()];
    for(i=0;i<d;i++)
    {
        for(j=0;j<plainText.length();j++)
        {
            rail_matrix[i][j]='^';
        }
    }
    
    for(i=0;c<plainText.length();i++)//might need to change
    {
        for(j=0;j<d;j++)
        {
            rail_matrix[j][i]=plainText[c];
            cout<<rail_matrix[j][i];
            c++;
            if(c>=plainText.length())break;
        }
        i++;
        for(j=d-2;j>0;j--)
        {
            //kinda need this line for(k=0;k<5;
            rail_matrix[j][i]=plainText[c];
            cout<<rail_matrix[j][i];//change i+1 to arkai
            if(c>=plainText.length())break;
            c++;
            
        }
        
        
    }
    cout<<"\n\n";
    for(j=0;j<d;j++){
        for(i=0;i<plainText.length();i++)
        {
            if(rail_matrix[j][i]!='^'){
                //  cout<< rail_matrix[j][i];
                CipherText.append(1,rail_matrix[j][i]);
            }
        }}
    
    
    cout<<"\n\nfinal-"<<CipherText;
    cout<<"\n\tatahhrksauak";
    
    
        }
/*

void encode(){
    int Depth=5;
    
    int i,j,c=0;
    string plainText,CipherText;
    
    int nrow=Depth,ncol;
    
    while (getline(inputFile, plainText)){
         ncol=(int)plainText.length();
        char rail_matrix[nrow][ncol];

        for(i=0;i<nrow;i++)
        {
            for(j=0;j<ncol;j++)
            {
                rail_matrix[i][j]='^';
            }
        }
        
        for(i=0;c<ncol;i++)
        {
            for(j=0;j<nrow;j++)
            {
                rail_matrix[j][i]=plainText[c];
                cout<<rail_matrix[j][i];
                c++;
                if(c>=plainText.length())break;
            }
            i++;
            for(j=nrow-2;j>0;j--)
            {
                
                rail_matrix[j][i]=plainText[c];
                cout<<rail_matrix[j][i];
                if(c>=plainText.length())break;
                c++;
                
            }
            
            
        }
      //  cout<<"\n\n";
        for(j=0;j<nrow;j++){
            for(i=0;i<plainText.length();i++)
            {
                if(rail_matrix[j][i]!='^'){
                    
                    CipherText.append(1,rail_matrix[j][i]);
                }
            }}
        
        
        
         cout<<"\n\nfinal-"<<CipherText;
         cout<<"\n\tatahhrksauak";
        CipherText.push_back('\n');
    }
    saveFile(CipherText);
}
*/

