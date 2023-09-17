//
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int nn;
    cin>>nn;
    int ar[10000];
    long long sum=0;
    for(int i=0;i<nn;i++){
        cin>>ar[i];
        sum+=ar[i];
    }
    (sum%2==0)?cout<<"YES"<<endl:cout<<"NO"<<endl;
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}