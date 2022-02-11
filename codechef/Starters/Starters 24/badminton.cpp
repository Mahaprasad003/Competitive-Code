#include<iostream>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n,cnt=0; cin>>n;
		int even = n/2;
		int odd = n-even;

		if(n%2==0)
		{
			cout<<even+1<<endl;
		}
		else{
			cout<<odd<<endl;

		}

		// while(n>0)
		// {
		// 	if(n%2==0)
		// 	{
		// 		cnt++;
		// 	}
		// 	n--;
		// }
	}
}
