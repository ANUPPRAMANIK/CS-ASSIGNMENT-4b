#include<iostream>
using namespace std;
int sum(int a)
{ 
	if(a==0)
	{
		return 0;
		}
		else
		{
			return (a%10) + sum(a/10);
			}
			}
			main() {
				int b;
				cout<<" enter any number ";
				cin>>b;
				cout<<" \nsum of digits = "<<sum(b);
				return 0;
				}
