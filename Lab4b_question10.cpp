#include<iostream>
using namespace std;
int fib(int a)
{
	if((a==1)||(a==0))
	return(a);
	else
	return(fib(a-1)+fib(a-2));
	}
	main() {
		int c,d=0;
		cout<<" enter a positive integer ";
		cin>>c;
		while(d<c)
		{
			cout<<fib(d)<<"  ";
			d++;
		}
		}
