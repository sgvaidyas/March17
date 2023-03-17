#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	deque<int> myqueue;
	
	myqueue.push_front(11);
	myqueue.push_front(22);
	myqueue.push_front(33);
	myqueue.push_back(44);
	myqueue.push_back(55);
	
	cout<<"\nmyqueue.back() = "<<myqueue.back()<<endl;
	while(myqueue.size() > 0)
	{
		cout<<myqueue.back()<<endl;
		myqueue.pop_back();
	}
	
}
	
