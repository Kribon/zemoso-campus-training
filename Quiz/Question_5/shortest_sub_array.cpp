#include <vector>
#include<climits>

using namespace std;

vector<int> shortest_sub_array(vector<int> A,vector<int> B){
	vector<int> indices;
	int n=A.size(),m=B.size();
	int hash_B[100]={0};
	int hash_A[100]={0};

	for(int i=0;i<m;i++)
	{
		hash_B[B[i]]++; //count occurance of each number
	}

	int start=0, start_index=-1,min_len=INT_MAX;
	//traveesing in vector A
	int count=0;
	for(int j=0;j<n;j++)
	{
		hash_A[A[j]]++;  //count occuance of each number

		//if A element matches with B element increment count
		if( hash_B[A[j]]!=0 && hash_A[A[j]] <= hash_B[A[j]] )
		{
			count++;
		}
		//if all ements matched
		if(count==m)
		{  while(hash_A[A[start]] > hash_B[A[start]] || hash_B[A[start]]==0)
			{
				if(hash_A[A[start]] > hash_B[A[start]])
				{
					hash_A[A[start]]--;
				}
				start++;
			}
			//update size of sub array
			int len=j-start+1;
			if(min_len>len)
			{
				min_len=len;
				start_index=start;
			}
		}
	}
	if(start_index == -1)
	{
		return {-1,-1};
	}

	else 
	{
		return {start_index,min_len};
	}
	
}
