#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        long long n, k;
        cin >> n >> k;
        vector<pair<long long, long long>> pairs(n);
        for(int i = 0; i < n; i++)
        {
            cin >> pairs[i].first >> pairs[i].second;
        }
        long long sum=0;
        for(int i = 0; i < n; i++)
        {
            sum+=k/pairs[i].first;
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
    }
}
