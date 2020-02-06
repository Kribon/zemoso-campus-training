//do we need to include vector lib again??

bool check(vector<long> sorted,long arr[])
{   
  for(int i=0;i<sorted.size();i++)
  {
    if(sorted[i]!=arr[i]) return false;
   }
  return true;
}
