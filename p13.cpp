#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	list<string> names;
	list<string>::iterator it;

	names.push_back("aaaa");
	names.push_back("bbb");
	names.push_front("ccc");
	names.push_front("ddddd");
	names.push_front("ddddd");
	
	it = names.begin();	
	names.insert(it,"ggggg");
	cout<<"\n before \n ";
	for(it = names.begin(); it!=names.end();it++)
		cout<<*it<<endl;
	cout<<"\n\n";
	it = ++names.begin();	
	it = names.erase(it);
	for(it = names.begin(); it!=names.end();it++)
		cout<<*it<<endl;
		
}
