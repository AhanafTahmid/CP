#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int n;
    cin>>n;
    unordered_map<int,int> up;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        up[x]++;
    }

    for(auto [x,y]: up){
        if(y%2==1){
            cout<< x <<endl;
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