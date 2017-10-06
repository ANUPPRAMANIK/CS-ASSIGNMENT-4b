#include<iostream>
using namespace std;
void N(int a,int b)
{
	if(a==b)
	{
		cout<<"  "<<a;
		return;
		}
		cout<<"  "<<a;
		return N(a+1,b);
		}
		main() {
			int c;
			cout<<" enter any integer ";
			cin>>c;
			cout<<" \nthe natural numbers are: ";
			N(1,c);
			}
