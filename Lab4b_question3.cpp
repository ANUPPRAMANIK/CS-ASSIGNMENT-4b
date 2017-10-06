#include<iostream>
using namespace std;
void EO(int a, int b)
{
	if(a!=b)
	{
		if(a%2==0)
		{
			cout<<" \n "<<a<<" is an even number ";
			EO(a+1,b);
			}
			else
			{
				cout<<" \n "<<a<<" is a odd number ";
				EO(a+1,b);
				}
				}
				else
				{
					if(a%2==0)
					{
						cout<<" \n "<<a<<" is an even number ";
						return;
						}
						else
						{
							cout<<" \n "<<a<<" is a odd number ";
							return;
							}
							}
							}
							main() {
								int c,d;
								cout<<" \nenter the lower and upper limits ";
								cin>>c>>d;
								EO(c,d);
								}
