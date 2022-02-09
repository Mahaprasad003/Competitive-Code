#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		string s; cin>>s;
		char ch;
		for(int i=0;i<s.length();i++)
		{
			ch = 'Z' - s[i] + 'A';
            	cout << ch;
		}
		cout<<endl;

	}
}
