#include<iostream>
using namespace std;
int i=0,x=0;
int max(int a[10])
{
	if(a[i]>a[0])
	a[0]=a[i];
	if(i<10)
	{
		i++;
		max(a);
		}
		return a[0];
			}
		int min(int b[10])
		{
			if(b[x]<b[0])
			b[0]=b[x];
			if(x<10)
			{
				x++;
				min(b);
				}
				return b[0];
				}
				main() {
					int a[10];
					cout<<" enter the elements of array(0 to 100) ";
					for(int x=0;x<10;x++)
					cin>>a[x];
					cout<<" \nmax: "<<max(a);
					cout<<" \nmin: "<<min(a);
					}
