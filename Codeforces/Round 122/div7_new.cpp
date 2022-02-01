#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n,a,b,i=0,k=0,res;
		cin>>n;
		a=n;
		b=n;
		while(a%7!=0)
		{
			a++;
			i++;
		}
		while(b%7!=0)
		{
			b--;
			k++;
		}
		int n1 = n+i;
		int n2 = n-k;
		if(n1/10==n/10)
		{
			res = n1;
		}
		else{
			res = n2;
		}
		// if(res%7==0)
		// {
		// 	if(res%10==0)
		// 	{
		// 		res = res/10;
		// 	}
		// 	else{
		// 		res = res;
		// 	}
		// }
		cout<<res<<endl;
	}
}
