#include<vector>

using namespace std;

bool qcheck(vector<long> sorted,long arr[])
{   
  for(int i=0;i<sorted.size();i++)
  {
    if(sorted[i]!=arr[i]) return false;
   }
  return true;
}
