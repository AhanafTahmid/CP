#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

ll pr[10000000]={};
bool sieve(int n){
    for(int i=2;i*i<=n;i++){
        if(pr[i]==0){
            for(int j=i*i;j<=n;j+=i){
                pr[j] = 1;
            }
        }
    }
    return pr[n];
}

void solve(){
    int n;
    cin>> n;
    sieve(10000000);
    vector<int> ans;
    int ct = 0;
    for(int i=2;i<=n;i++){
        if(!pr[i]) ct++,ans.push_back(i);
    }
    cout<< ct <<endl;
    for(auto x: ans){
        cout<< x <<" ";
    }   
    cout<<endl;

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}