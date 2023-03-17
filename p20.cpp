#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<pair<int,int>> vec(3);

	for (int i = 0; i < 3; ++i) {
	    cin >> vec[i].first >> vec[i].second;
	    cout << vec[i].first << " : " << vec[i].second << endl;
	}
}

