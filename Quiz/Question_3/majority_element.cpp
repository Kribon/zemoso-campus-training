#include<iostream>
#include <map>
#include <vector>
#include<algorithm>

#include "majority_element.h"

using namespace std;

map<int,int> mapping(vector<int> arr){
	map<int,int> mp;
	for(int i=0;i<arr.size();i++){
		if(mp.find(arr[i])==mp.end()) mp[arr[i]]=1;
		else mp[arr[i]]++;
	}
	return mp;
 }

 int findout(map<int,int> mp,int n){
 	int max_element=-1;
 	map<int,int> ::iterator it=mp.begin();
 	for(;it!=mp.end();it++){
 		if(it->second>=n/2) max_element=it->first;
 	}
 	return max_element;
 }
