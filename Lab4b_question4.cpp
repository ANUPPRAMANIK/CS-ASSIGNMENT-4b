#include<iostream>
using namespace std;
int sum(int a);
main() {
	int a;
	cout<<" enter a number ";
	cin>>a;
	cout<<" \n "<<" sum of all numbers between 1 to "<<a<<" = "<<sum(a);
	}
	int sum(int a)
	{
		if (a!=0)
		return (a+sum(a-1));
		else
		return 0;
		}
