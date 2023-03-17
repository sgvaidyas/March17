#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	list<string> names;
	string name;
	
	int n;
	cout<<"\n Size = ";
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cout<<"\n Enter the name = ";
		cin>>name;
		names.push_back(name);	
	}
	list<string>::iterator it;
	for(it = names.begin(); it!=names.end();it++)
		cout<<*it<<endl;
		
	names.push_front("----------");
	for(it = names.begin(); it!=names.end();it++)
		cout<<*it<<endl;
		
	it = names.begin();
	names.insert(it,"ggggg");
	
	for(it = names.begin(); it!=names.end();it++)
		cout<<*it<<endl;
		
}
