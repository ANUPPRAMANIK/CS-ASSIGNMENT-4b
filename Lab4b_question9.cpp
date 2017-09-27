#include<iostream>
using namespace std;
int fact(int a);
main() {
	int a;
	cout<<" enter a number ";
	cin>>a;
	cout<<" \n "<<" the factorial of "<<a<<" = "<<fact(a);
	}
	int fact(int a)
	{
		if (a>1)
		return (a*fact(a-1));
		else
		return 1;
		}
