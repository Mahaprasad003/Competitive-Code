#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		string a; cin>>a;
		string b; cin>>b;
		int t=0;  //time
		int len = b.length();
		int arr[len];
		for(int i=0;i<len;i++)
		{
			int cnt=0;
			for(int j=0;j<26;j++)
			{
				if(a[j]!=b[i]){
					cnt++;
				}
				else{
					break;
				}
			}
			arr[i] = cnt+1;
		}
		for(int i=0;i<len-1;i++)
		{
			int diff = abs(arr[i] - arr[i+1]);
			t = t+diff;
		}
		cout<<t<<endl;
	}
}
