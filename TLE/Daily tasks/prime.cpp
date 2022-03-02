#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin>>n;
	for (int i = 1; i <= n; i++)
   	{
		int c=0;
		for(int j=1;j<=i;j++)
		{
			if(i%j ==0)
			c++;
		}
		if(c==2)
		{
			cout<<i<<" ";
		}


   	}

}

int main()
{
	solve();

}
