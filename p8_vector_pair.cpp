#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void display(vector<pair<int,int>> &v)
{
	for(int i=0;i<v.size();i++)
		cout<<v[i].first << " : "<<v[i].second<<endl;
	
}

int main()
{
	int n,ele,size,first,second;
	cout<<"\n Enter no of ele = ";
	cin>>n;

	vector<pair<int,int>> v;
	for(int i=0;i<n;i++)
	{
		cout<<"\n enter the first and second = ";
		cin>>first>>second;
		v.push_back({first,second});
	}
	
	display(v);
}
