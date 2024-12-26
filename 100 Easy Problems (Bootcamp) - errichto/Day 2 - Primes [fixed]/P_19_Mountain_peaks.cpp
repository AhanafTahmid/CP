#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

vector<ll> split;

void get_divisors(ll n){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(n/i!=i)split.push_back(n/i);
        }
    }

}


void solve(){
    int n;
    cin>> n;
    get_divisors(n);
    vector<ll> h(n);
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    vector<ll> chal;
    for(int i=1;i<n-1;i++){
        if(h[i-1]<h[i] && h[i+1]<h[i]) chal.push_back(i+1);
    }
    //for(auto x: chal)cout<< x <<" ";
    // cout<<endl;
    // for(auto x: split)cout<< x <<" ";
    int ans = 0;
    int f = 0;

    if(chal.size()<=1){
        cout<< chal.size() <<endl;
        return;
    }

    sort(split.begin(),split.end());
    for(auto sp: split){
        int ct = 0;
        int ss = sp;
        for(int i=0;i<chal.size();i++){
            if(chal[i]>=sp){
                ct++;
                ss +=sp;
            }
            //cout<< chal[i] <<" "<< ss <<endl;
            // 6 > 4
            //else if(chal[i]>sp) continue;
            
            
        }
        if(ct==chal.size()){
            ans = n/sp;
            //cout<< n << " = "<< sp<<endl;
            cout<< ans <<endl;
            return;
        }

    }
    



}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}