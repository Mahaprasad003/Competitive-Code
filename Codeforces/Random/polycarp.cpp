#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int arr[7];
		for(int i=0;i<7;i++)
		{
			cin>>arr[i];
		}
		cout<<arr[0]<<" ";
		cout<<arr[1]<<" ";
		if(arr[0]+arr[1]==arr[2]){
			cout<<arr[3]<<endl;
		}
		else{
			cout<<arr[2]<<endl;
		}


	}
}
