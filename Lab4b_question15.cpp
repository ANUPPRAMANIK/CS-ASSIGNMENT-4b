#include<iostream>
using namespace std;
int max(int A[], int n)
{
	if (n==1)
	return A[0];
	return max(A[n-1], findMaxRec(A, n-1));
	}
	int findMinRec(int A[], int n)
	{
		if (n==1)
		return A[0];
		return min(A[n-1], findMinRec(A, n-1));
		}
		main() {
			int A[]={3,9,10,2,-34,19,23,67,-5};
			int n=sizeof(A)/sizeof(A[0]);
			cout<<" max: "<<findMaxRec(A,n);
			cout<<" min: "<<findMinRec(A,n);
			}
