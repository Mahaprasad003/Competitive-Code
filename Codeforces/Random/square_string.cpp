#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		string s;
  		cin>>s;
  		int n=s.length();
  		if(n%2!=0)
		{
    			cout<<"NO"<<endl;
    		}
		else
		{
			int j = n/2;
			string t1 = s.substr(0,j);
			string t2 = s.substr(j);
			if(t1==t2)
			{
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}


	}

}
