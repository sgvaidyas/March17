#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	pair<int , int> ob[3];	
	
	for(int i=0;i<3;i++)
	{
		cout<<"\n Enter the first value = ";
		cin>>ob[i].first;
		cout<<"\n Enter the second value = ";
		cin>>ob[i].second;
		
	}
	for(int i=0;i<3;i++)
		cout<<ob[i].first << " : "<<ob[i].second<<endl;

}
