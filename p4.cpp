#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	pair<int , int> ob;	
	ob = {22,88};
	
	pair<int , int > &ob1= ob;	
	ob1.first = 9999;
	cout<<ob.first<<" : "<<ob.second<<endl;
	cout<<ob1.first<<" : "<<ob1.second;
}
