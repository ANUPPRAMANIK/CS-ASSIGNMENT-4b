#include<iostream>
using namespace std;
int gcd(int a, int b);
main() {
    int a,b,c;
    cout<<" enter any two numbers ";
    cin>>a>>b;
    c=gcd(a,b);
    cout<<" \n "<<" the gcd(hcf) of "<<a<<" and "<<b<<" is = "<<c;
    }
int gcd(int a,int b)
{
    if((a>=b)&&((a%b)==0))
        return(b);
    else
        gcd(b,(a%b));
}
