#include <iostream>
#include <vector>

#include "check.cpp"

using namespace std;

void merge(long arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    long L[n1], R[n2]; // create temp arrays left and right
    
    for (i = 0; i < n1; i++) //copying data into left and right
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
        
     //Merging
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    // Copy the remaining elements of L[],R[] if there are any 
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
    
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
}

void mergeSort(long arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        int m = l+(r-l)/2; 
        // Sort first and second halves 
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 

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
