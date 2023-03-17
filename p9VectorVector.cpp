#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void display(vector<int> &v)
{
	cout<<"\n--------------------\n";
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<endl;	
}

int main()
{
	int n,ele,size;
	cout<<"\n Enter no of ele = ";
	cin>>n;

	vector<vector<int>> v;
	vector<int> temp;
	for(int i=0;i<n;i++)
	{
		cout<<"\n Enter size = ";
		cin>>size;
		temp.clear();
		for(int i=0;i<size ;i++)
		{
			cout<<"\n enter ele = ";
			cin>>ele;
			temp.push_back(ele);
		}
		v.push_back(temp);
	}
	for(int i=0;i<n;i++)
		display(v[i]);
}
