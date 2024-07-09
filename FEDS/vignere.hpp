//
//  vignere.hpp
//  FEDS
//
//  Created by rujan on 09/07/2024.
//

#ifndef vignere_hpp
#define vignere_hpp

#include <iostream>

std::string PlainText,PassKey,CipherText;
int i,j=0,d=97;
PlainText="lxfopvefrnhr"; //lxfopvefrnhr ,atZackaZda]n, attackatdawn , athackahdaen
PassKey="lemon";
std::cout<<"PlainText:"<<PlainText<<endl;
char a,b,c;
for(i=0;i<PlainText.length();i++){
    a=PlainText[i];
    b=PassKey[j];
    
    a-=d;
    b-=d;
    cout<<"a-"<<(int)a<<"\nb-"<<(int)b<<endl;
    if((int)a<(int)b)    {
        c=(abs((a+b))%26)+d;}
    else{
        
        c=(abs((a-b))%26)+d;}
    //      cout<<"c-"<<c<<endl;
    CipherText.append(1,c);
    //     cout<<"CipherText="<<CipherText[i]<<endl;
    std:: cout<<"PlainText:"<<PlainText<<std::endl;
    j++;
    if(!PassKey[j])
        j=0;
    std::cout<<"\nFinal"<<CipherText<<std::endl;
}

std::cout<<"PlainText:"<<PlainText<<"\nPassPassKey:"<<PassKey;
std::cout<<"\nFinal-"<<CipherText<<std::endl;




#endif /* vignere_hpp */
