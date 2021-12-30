#include <iostream>
#include <string>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        char first,second,third,x,y;
        cin>>first>>second>>third;
        cin>>x>>y;
        if(first == x || first == y)
        {
            cout<<first;
        }
        else if ( second == x || second == y)
        {
            cout<<second;
        }
        else if( third == x || third == y)
        {
            cout<<third;
        }
    }
    return 0;
}
