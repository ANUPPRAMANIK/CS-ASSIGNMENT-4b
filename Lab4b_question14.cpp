#include<iostream>
using namespace std;
int arr(int x[],int n)
{
	int sum;
	if(n==0)
	{
		sum=0;
		}
		else
		sum=x[n-1]+arr(x,n-1);
		return (sum);
		}
		main() {
			int n[100],l;
			cout<<" Enter the number of elements of array(0 to 100) ";
			cin>>l;
			for(int k=0;k<l;k++)
			cin>>n[k];
			cout<<" \nsum of the array elements: "<<arr(n,l);
			}
