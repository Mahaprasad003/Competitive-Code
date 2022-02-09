#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int N,x;
    cin>>N;
    vector<int>v;
    for (int i = 0; i < N; i++)
    {
        cin>>x;
        v[i] = x;
    }

    sort(v.begin(), v.end());

    for(int j=0; j < N; j++)
    {
        cout << v[j] <<endl;
    }


    return 0;
}