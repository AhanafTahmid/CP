#include <bits/stdc++.h>
using namespace std;
bool comp(const pair<int,int> &a,  const pair<int,int> &b){
    return a.second > b.second; 
}

void solve(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> vc;
    int a,b;
    for(int i=0;i<m;i++){
        cin>>a;
        cin>>b;
        //a.push_back(a[i]);
        //b.push_back(b[i]);
        vc.push_back( make_pair(a,b) );

    }
    sort(vc.begin(),vc.end(),comp);

    int nn = n;
    int val=0;
    for(int i=0;i<m;i++){

        if(vc[i].first>nn){
            val+=(nn*vc[i].second);
            // cout<<vc[i].second<<endl;
            // cout<<"je;"<<endl;
            // cout<<nn<<endl;
            // cout<<val<<endl;
            break;
        }
        else if(vc[i].first<=nn){
            val+=(vc[i].first*vc[i].second);
            nn-=vc[i].first;
        }
        
    }
   cout<<val<<endl;
    
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}