#include<iostream>
#define SIZE 4
using namespace std;
void gt(int arr[SIZE][SIZE],int a, int b)
{
	if(a==SIZE)
	{
		return;
		}
		if(b==SIZE)
		return gt(arr,a+1,0);
		cout<<arr[a][b]<<" "; 
		return gt(arr,a,b+1);
		}
		main() {
			int arre[SIZE][SIZE]={{1,2,3,4},{50,101,63,200},{50,240,600,300},{700,400,399,385}};
			gt(arre,0,0);
			}
