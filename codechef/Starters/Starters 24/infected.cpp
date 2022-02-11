#include<iostream>
using namespace std;

int factorial(int n)
{
    // single line to find factorial
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n,i,res=0;
		cin>>n>>i;
		int good = n-i;
		int f = factorial(n);
		if(i!=0)
		{
			res = f * (i+1)*(i)*(i-1);
		}
		else{
			res = n;
		}

		cout<<res;


	}
}
