//do we need to include vector lib again??

bool check(vector<int> sorted,int arr[])
{   
  for(int i=0;i<sorted.size();i++)
  {
    if(sorted[i]!=arr[i]) return false;
   }
  return true;
}
