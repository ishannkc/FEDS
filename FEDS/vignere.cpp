//
//  vignere.cpp
//  FEDS
//
//  Created by rujan on 09/07/2024.
//
#include<iostream>
#include "vignere.hpp"
using namespace std;

int main(){
    
    
    
    
    string PlainText,PassKey,CipherText;
    int i,j=0,d=97;
    PlainText="lxfopvefrnhr"; //lxfopvefrnhr ,atZackaZda]n, attackatdawn , athackahdaen
    PassKey="lemon";
    cout<<"PlainText:"<<PlainText<<endl;
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
        cout<<"PlainText:"<<PlainText<<endl;
        j++;
        if(!PassKey[j])
            j=0;
        cout<<"\nFinal"<<CipherText<<endl;
    }
    
    cout<<"PlainText:"<<PlainText<<"\nPassPassKey:"<<PassKey;
    cout<<"\nFinal-"<<CipherText<<endl;
    
    
    
    
    
    return 0;
}
