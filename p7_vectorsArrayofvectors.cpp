#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void display(vector<int> &v)
{
	cout<<"\n Size = "<<v.size();
	cout<<"\t Capacity = "<<v.capacity()<<endl;
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<endl;
	
}

int main()
{
	int n,ele,size;
	cout<<"\n Enter no of ele = ";
	cin>>n;

	vector<int> v[n];//v[0],v[1],v[2]
	for(int i=0;i<n;i++)
	{
		cout<<"\n Enter the size : ";
		cin>>size;
		for(int j=0;j<size;j++)
		{
			cout<<"\n Enter the ele = ";
			cin>>ele;
			v[i].push_back(ele);
		}
	}
	
	for(int i=0;i<n;i++)
		display(v[i]);
}
