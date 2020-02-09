#include <iostream>
#include <vector>
#include <algorithm>

#include "check.h"
#include "sort.h"

using namespace std;

int main()
{
  int n;
  cin >>n; //take number of elements in array
  long arr[n];
  vector<long> vec;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    vec.push_back(arr[i]);
    }
   mergeSort(arr,0,n-1);
  // check for corectness of algorithm
  sort(vec.begin(),vec.end());
  if(qcheck(vec,arr)) 
     {
         cout<<"Your Algorithm is correct"<<endl;
         for(int i=0;i<n;i++) 
           {
             cout<<arr[i]<<' ';
           }
     }
     else 
       cout<<"Please check your Algorithm";
  return 0;
 }
