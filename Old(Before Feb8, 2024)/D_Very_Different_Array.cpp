#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,m;
    cin>>n>>m;
    deque<ll> a;
    deque<ll> b;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<m;i++){
        int x;cin>>x;
        b.push_back(x);
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end(),greater<int>());

    int mx = -1;
    ll sum = 0;
    while(1){
        
        //put the higest value in the summation
        ll p = abs(a.front()-b.front());
        ll q = abs(a.back()-b.back());

        mx = max(p,q);
        if(mx==p){
            sum+=p;
            a.pop_front();
            b.pop_front();
        }
        else if(mx==q){
            sum+=q;
            a.pop_back();
            b.pop_back();
        }
        if(a.size()==0)break;


    }


    // for(auto x: a)cout<<x<<" ";
    // cout<<endl;
    // for(auto x: b)cout<<x<<" ";
    // cout<<endl;
    cout<<sum<<endl;

}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}