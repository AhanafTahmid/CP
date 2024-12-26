#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int n;
    cin>>n;
    vector<int> a;
    map<int, int > mp;
    
    for(int i=0;i<n;i++){
        int x; cin>>x;
        a.push_back(x);
        mp[x]++;
    }
    vector< pair<int, int > > vc = {mp.begin(),mp.end()};
    sort(vc.begin(),vc.end(),[](const auto &a, const auto &b){return b.second<a.second;});
    //for(auto [x,y]: vc)cout<< x <<" "<< y <<endl;
    
    for(auto [x,y]: vc){
        if(y == vc[0].second){

        }
    }

}


int main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}