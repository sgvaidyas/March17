#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	set<int> myset;
	
	myset.insert(6666);
	myset.insert(44);
	myset.insert(56);
	myset.insert(6666);
	myset.insert(56);
	
	myset.erase(56);
	
	for(auto x : myset){
		cout<<x<<"\n";
	}
	
	
}
