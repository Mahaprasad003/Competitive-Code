#include<bits/stdc++.h>
#include<numeric>
using namespace std;
void solve();

int main()
{
	int t; cin>>t;
	while(t--)
	{
		solve();

	}
}

void solve()
{
	int a,b,c;
	cin>>b>>c;
	for(int i=1;i<c;i++)
	{
		if((i*b)%c==0){
			cout<<i<<endl;
			return;
		}
	}

}
