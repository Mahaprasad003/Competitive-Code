#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,k;
	int cert;
	cin>>n>>m>>k;
	int arr[n][n+1];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n+1;j++)
		{
			cin>>arr[i][j];
		}
	}
	int cnt =0;
	for(int i=0;i<n;i++)
	{
		int sum=0;
		for(int j=0;j<4;j++)
		{
			if(j<4 && i<4)
			{
				sum += arr[i][j];
			}
			else
			{
				cert = arr[i][j];
			}
		}

		cout<<cert<<'\t';
		// if(sum>=m && cert<=10)
		// {
		// 	cnt++;
		// }
	}
	cout<<cnt;
	// for(int i=0;i<n;i++)
	// {
	// 	for(int j=0;j<3;j++)
	// 	{
	// 		cout<<arr[i][3]<<'\t';
	// 	}
	// 	cout<<endl;
}
