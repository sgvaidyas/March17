#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	map<string,double> Empsalary;
	
	Empsalary.emplace("Shilpa",100);
	Empsalary.emplace("Aadil",200);
	Empsalary.emplace("Doha",270);
	Empsalary.emplace("David",100000);
	
	Empsalary.at("Doha") = 2000;
	cout<<"David salary = "<<Empsalary.at("David")<<endl;
	cout<<"Doha salary = "<<Empsalary.at("Doha")<<endl;

	cout<<"\n Count = "<<Empsalary.count("Aadil")<<endl;
	Empsalary.erase("Shilpa");
//	cout<<"Shilpa salary = "<<Empsalary.at("Shilpa")<<endl;
}
	
