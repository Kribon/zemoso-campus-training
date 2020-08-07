#include <iostream>

#include "find_pairs.h"

using namespace std;

int main(){
cout<<"Enter number of elements in first array";
int first_n;
cin>>first_n;
cout<<"Enter number of elements in second array";
int second_n;
cin>>second_n;
cout<<"Enter the elements of first Array";
vector<int> first(first_n),second(second_n);
for(int i=0;i<first_n;i++)
  { 
    cin>>first[i];
  }
cout<<"Enter the elements of second Array";
for(int i=0;i<second_n;i++)
  { 
    cin>>second[i];
  }

find_pairs(first,second);



return 0;
}
