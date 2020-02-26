#include<iostream>
#include <map>
#include <vector>

#include "majority_element.h"

using namespace std;

int main()
{
 cout<<"Enter number of elements in array";
 int n;
 cin>>n;
 cout<<"Enter elements of the array";
vector<int> arr(n);
 for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }

map<int,int> mp= mapping(arr);

int max_element=findout(mp,n);

cout<<max_element<<endl;

}
