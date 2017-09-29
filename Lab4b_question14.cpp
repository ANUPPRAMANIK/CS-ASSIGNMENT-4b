#include<iostream>
using namespace std;
int sum(int a[], int b)
{
	if (b<=0)
	return 0;
	return (sum(a,b-1) + a[b-1]);
	}
	main() {
		int a[]={1,2,3,4,5};
		int b=sizeof(a)/sizeof(a[0]);
		cout<<sum(a,b);
		}
