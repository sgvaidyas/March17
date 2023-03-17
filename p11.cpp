#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,ele,size;
	vector<pair<int,int>> v = {{11,22},{33,44},{55,66}};
	
	vector<pair<int,int>>::iterator it ;
	for(it = v.begin();it!=v.end();it++)
		//cout<<(*it).first<<" "<<(*it).second <<"\t";
		cout<<it->first<<" "<<it->second <<"\t";		
}
