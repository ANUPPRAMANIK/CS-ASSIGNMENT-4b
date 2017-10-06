#include<iostream>
using namespace std;
int i=0;
int arr(int x[],int n)
{
	cout<<x[i]<<"  ";
	if(i<n-1)
	{
		i++;
		arr(x,n);
		}
		return 0;
		}
		main() {
			int n[100],l;
			cout<<" enter the number of elements of array(0 to 100) ";
			cin>>l;
			for(int k=0;k<l;k++)
			cin>>n[k];
			cout<<" \nthe array elements are: ";
			arr(n,l);
			}
