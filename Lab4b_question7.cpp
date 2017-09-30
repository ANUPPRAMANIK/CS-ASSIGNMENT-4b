#include<iostream>
using namespace std;
int a,b=0;
int rev(int c)
{   
	if (c>=1) 
	{
		a=c%10;
		b=b*10+a;
		rev(c/10);
		}
		else
		return b;
		}
		main() {
			int d;
			cout<<" enter the number ";
			cin>>d;
			if (rev(d)==d)
			{
				cout<<d<<" \nthe number is a palindrome number ";
				}
				else
				{
					cout<<d<<" \nthe number is not a palindrome number ";
					}
					}
