#include<iostream>
#include<vector>

#include "find_pairs.h"

using namespace std;

int add(vector<int> arr){
  int sum=0;
  for(int i=0;i<arr.size();i++)
    { 
       sum+=arr[i];
     }
  return sum;
}

bool check(int a,int b){
  if(a-b==0) return true;
  else return false;
}

void find_pairs(vector<int> first,vector<int> second){
  vector<vector<int>> pairs;
  int sum1=add(first);
  int sum2=add(second);
  int sum1_1,sum2_1;
  int res_1=-1,res_2=-1;
  for(int i=0;i<first.size();i++)
  {
    for(int j=0;j<second.size();j++)
    {   sum1_1=sum1-first[i]+second[j];
    	sum2_1=sum2-second[j]+first[i];

       if(check(sum1_1,sum2_1))
         {
         	res_1=first[i];
         	res_2=second[j];
         }

    }
  }
  if(res_1!=-1&&res_2!=-1)
  	cout<<"("<<res_1<<","<<res_2<<")"<<endl;
  else cout<<"Not Possible"<<endl;
}
