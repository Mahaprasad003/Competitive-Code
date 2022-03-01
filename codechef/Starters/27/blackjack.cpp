#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b;
		c = 21 - (a + b);
		if(c>10)
		{
			cout<<-1<<endl;
		}
		else{
			cout<<c<<endl;
		}
	}
}
