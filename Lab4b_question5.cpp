#include<iostream>
using namespace std;
int E(int a, int b)
{
	if(a<=b)
	return (a + E(a+2,b));
	else 
	return 0;
	}
	int O(int a, int b)
	{
		if(a<=b)
		return (a + E(a+2,b));
		else 
		return 0;
		}
		main() {
			int c,d,e,f;
			cout<<" enter the lower and upper limits ";
			cin>>c>>d;
			if(c%2==0)
			{
				e=E(c,d);
				f=O(c+1,d);
				}
				else
				{
					f=O(c,d);
					e=E(c+1,d);
					}
					cout<<" \nsum of even numbers: "<<e;
					cout<<" \nsum of odd numbers: "<<f;
					}
