#include<iostream>

#include "convert.h"

using namespace std;


int main(int argc, char *argv[]) 
{ 
  
    unsigned long n = stoi(argv[1]);
    string towords=convert(n);
    cout << towords << endl; 
   
  
    return 0; 
} 
