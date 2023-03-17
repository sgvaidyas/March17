#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	map<int,int > ob;
	ob[11] = 9999;
	ob[12] = 7777;
	map<int , int >::iterator it;
	
	for(it = ob.begin(); it!=ob.end() ; it++)
	{
		cout<<it->first<<" : "<<it->second<<endl;
	}
	
	ob.insert(make_pair(99,55555));
	cout<<"\n----------------------\n";
	for(it = ob.begin(); it!=ob.end() ; it++)
	{
		cout<<it->first<<" : "<<it->second<<endl;
	}
	cout<<" size = "<<ob.size();
	
	cout<<"\nob.count(999) = "<<ob.count(999);
	
}
	
