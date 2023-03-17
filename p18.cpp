#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	queue<int> myqueue;
	
	myqueue.push(11);
	myqueue.push(22);
	myqueue.push(33);
	myqueue.push(44);
	myqueue.push(55);
	
	cout<<"\nmyqueue.back() = "<<myqueue.back()<<endl;
	while(myqueue.size() > 0)
	{
		cout<<myqueue.front()<<endl;
		myqueue.pop();
	}
	
}
	
