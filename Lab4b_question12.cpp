#include<iostream>
using namespace std;
int hcf(int a, int b)
{
	if (b!=0)
	return hcf(b,a%b);
	else
	return a;
	}
	main() {
		int c,d,e;
		cout<<" enter two positive integers ";
		cin>>c>>d;
		e=(c*d)/hcf(c,d);
		cout<<" \nthe LCM of the two numbers is: "<<e;
		}
