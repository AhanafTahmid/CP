#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> a, pair<int,int> b){
    return a.second>b.second;
}

void solve(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> mt;
    int a,b;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        mt.push_back({a,b});
    }  
    sort(mt.begin(),mt.end(),comp);
    // int c = n;
    // long long sum = 0;
    // for(int i=0;i<m && c>0;i++){
    //     if(mt[i].first<=c){
    //         //cout<<sum<<endl;
    //         sum+=(mt[i].first*mt[i].second);
    //         c-=mt[i].first;
    //     }
    //     else if(mt[i].first>c){
    //         sum+=(c*mt[i].second);
    //         c-=mt[i].first;
    //     }

    // }
    // cout<<sum<<endl;
    

    for (auto [f, s] : mt) {
    cout<<f<<" "<<s<<endl;
}
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}