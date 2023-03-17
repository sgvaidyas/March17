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
	names.push_front("tt");
	names.push_front("yy");
	names.push_front("ooo");
	
	names.remove("ddddd");
	
	for(it = names.begin(); it!=names.end();it++)
		cout<<*it<<endl;
	
	cout<<"\n\n-\n";
	names.pop_back();
	names.pop_front();
	for(it = names.begin(); it!=names.end();it++)
		cout<<*it<<endl;
		
		
	cout<<"\n front  = "<<names.front()<<endl;
	cout<<"\n back  = "<<names.back()<<endl;
	
		
}
