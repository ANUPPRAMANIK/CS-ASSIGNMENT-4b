#include<iostream>
using namespace std;
int pow(int, int);
main() {
	int a,b,c;
	cout<<" enter base and exponent ";
	cin>>a>>b;
	c=pow(a,b);
	cout<<" \n "<<a<<" raised to the power "<<b<<" gives: "<<c;
	}
	int pow(int a, int b)
	{
		if (b!=0)
		return (a*pow(a,b-1));
		else
		return 1;
		}
