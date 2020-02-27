#include<iostream>

#include "convert.h"

using namespace std;


int main(int argc, char *argv[]) 
{ 
  
     long n = stoi(argv[1]);
  if(n<0) cout<<"Enter a positive number";
  else if(n==0) cout<<"Zero";
  else{
    string towords=convert(n);
    cout << towords << endl; 
  }
  
    return 0; 
} 
