#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int k,s;
	cin>>k>>s;
	int cnt=0;
	for(int x=0;x<=k;x++)
	{
		int z;
		for(int y=0;y<=k;y++)
		{
			z = s-x-y;
			if(z<=k && z>=0)
			{
				cnt++;
			}

		}
	}
	cout<<cnt;

}

int main()
{
   solve();


}
