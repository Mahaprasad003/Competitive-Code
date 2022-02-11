// https://codeforces.com/contest/1593/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int arr[3];
		for(int i=0;i<3;i++)
		{
			cin>>arr[i];
		}

		int maxi = *max_element(arr,arr+3);
		int counti = count(arr, arr + 3, maxi);
		if(counti>1){
			maxi = maxi + 1;
			for(int i=0;i<3;i++)
			{
				cout<<maxi-arr[i]<<" ";
			}
			cout<<endl;
		}
		else{
			maxi = maxi;
			for(int i=0;i<3;i++)
			{
				if(maxi-arr[i]==0)
				{
					cout<<0<<" ";
				}
				else{
					cout<<maxi-arr[i]+1<<" ";
				}
			}
			cout<<endl;
		}

	}
}
