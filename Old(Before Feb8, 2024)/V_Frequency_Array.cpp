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
    for(int j=1;j<=t;j++){
        //int tm = ar[i];
        fr[ar[j]]++;
        //cout<<fr[i];
    }
    for(i=1;i<=s;i++){
        cout<<fr[i]<<endl;
    }

    return 0;
}
