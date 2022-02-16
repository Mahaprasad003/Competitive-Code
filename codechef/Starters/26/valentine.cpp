#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int x,y,res; // x = money he has; y = price of one unit
		cin>>x>>y;
		if(y>x)
		{
			res = 0;
		}
		else{
			res = x/y;
		}
		cout<<res<<endl;
	}
}
