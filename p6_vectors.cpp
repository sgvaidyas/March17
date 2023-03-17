#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void display(vector<int> &v)
{
	cout<<"\n Size = "<<v.size();
	cout<<"\t Capacity = "<<v.capacity()<<endl;
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<endl;
	cout<<"\n pushed 2 extra ele 555 666 in disp\n";
	v.push_back(555);
	v.push_back(6666);
	
}

int main()
{
	vector<int> v;
	
	int n,ele;
	cout<<"\n Enter no of ele = ";
	cin>>n;
	display(v);
	
	for(int i=0;i<n;i++)
	{
		cout<<"\n enter tthe ele = ";
		cin>>ele;
		v.push_back(ele);
		display(v);		
	}
	display(v);
}
