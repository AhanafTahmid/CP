//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V
#include <bits/stdc++.h>
using namespace std;


int main(){

    int t,s,i,ar[100000];
    cin >> t >> s;
    int fr[s+2]={0};
    for(i=1;i<=t;i++){
        cin>>ar[i];
    }    
    for(i=1;i<=t;i++){
        //int tm = ar[i];
        fr[ar[i]]++;
        //cout<<fr[i];
    }
    for(i=1;i<=s;i++){
        cout<<fr[i]<<endl;
    }

    return 0;
}