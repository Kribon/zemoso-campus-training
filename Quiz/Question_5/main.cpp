#include<iostream>
#include <vector>

#include "shortest_sub_array.h"

using namespace std;

int main(){
	int n,m; //array lengths
	cout<<"Enter the number of elements in Array A"<<endl;
	cin>>n;
	cout<<"enter the number of elements in Array B"<<endl;
	cin>>m;
	vector<int> A(n),B(m),sol(2);
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	for(int i=0;i<m;i++){
		cin>>B[i];
	}
	if(n>=m){
		sol=shortest_sub_array(A,B);
	}
	else{
		sol=shortest_sub_array(B,A);
	}
	if(sol[0]==-1||sol[1]==-1){
		cout<<"Not Possible";
	}
	else {
		cout<<'['<<sol[0]<<','<<sol[0]+sol[1]-1<<']'<<endl;
	}
}
