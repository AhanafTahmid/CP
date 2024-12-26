#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> a, pair<int,int> b){
    return a.second>b.second;
    //if(a.first!=0) 
    //else if(b.first!=0) return a.second>b.second;
}

void solve(){
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> cs;
    int a,b;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        cs.push_back({a,b});
    }
    long long sum = 0;
    sort(cs.begin(),cs.end(),comp);
    int j = 0;
    int l = 0;
    while(l!=k){
        if(cs[j].first!=0){     
            cs[j].first=(cs[j].first*2);
            l++;
        }
        j++;
        

    }

    for(auto x: cs){
        sum+=min(x.first,x.second);
    }
    cout<<sum<<endl;
    


}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}