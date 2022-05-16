#ifndef OBJET_H
#define OBJET_H

#include <iostream>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class cle {       
  public:           
    int number;

  public:  
    void initialize(int number);
    string getPrivateKey();
    string getPublicKey();        
};

#endif