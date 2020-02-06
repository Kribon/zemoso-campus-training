#include <iostream>
#include <vector>

#include "check.h"
#include "sort.h"

using namespace std;

int main()
{
  int n;
  cin >>n; //take number of elements in array
  long arr[n];
  vector<int> to_sort(n);
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    cin>>to_sort(i);
    }
   mergeSort(arr,0,n-1);
  // check for corectness of algorithm
  sort(to_sort.begin(),to_sort.end());
  if(check(to_sort,arr) 
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
