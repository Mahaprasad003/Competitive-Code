#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int x; cin>>x; //total prize money
		string res; cin>>res; //results of the match
		int c=0; //counter for carlsen
		int n=0; // counter for Chef
		int d=0; //counter for draw
		for(int i=0;res[i] != '\0';i++)
		{
			if(res[i]=='C'){
				c++;
			}
			else if(res[i]=='N'){
				n++;
			}
			else{
				d++;
			}
		}
		int prize_money = 100*x;
		int carlsen_total = 2*c;
		int chef_total = 2*n;
		if(carlsen_total>chef_total)
		{
			cout<<60*x<<endl;
		}
		else if(carlsen_total==chef_total)
		{
			cout<<55*x<<endl;
		}
		else{
			cout<<40*x<<endl;
		}

		}
}
