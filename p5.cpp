#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	pair<int , int> ob[3];	
	ob[0] = {11,22};
	ob[1] = {1,2};
	ob[2] = {44,55};
	
	for(int i=0;i<3;i++)
		cout<<ob[i].first << " : "<<ob[i].second<<endl;
		
	swap(ob[0],ob[2]);
	cout<<"\n after swap\n";
	for(int i=0;i<3;i++)
		cout<<ob[i].first << " : "<<ob[i].second<<endl;
	
}
