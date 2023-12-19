#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int a[1999], b[19999];
    vector<pair<int,int>> cf;
    set<pair<int,int>> st;

    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        cf.push_back({a[i],b[i]});
        st.insert({a[i],b[i]});
    }

    sort(cf.begin(),cf.end());
    for(auto x: cf){
        if(x.first!=x.second){
            cout<<"rated"<<endl;
            return;
        }
    }
    if(cf.size()==st.size()){
        cout<<"unrated"<<endl;
    }
    else cout<<"maybe"<<endl;
   

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}