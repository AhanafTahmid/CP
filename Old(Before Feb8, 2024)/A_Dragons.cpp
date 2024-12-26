#include <bits/stdc++.h>
using namespace std;
void solve(){
    int s,n;
    cin>>s>>n;
    pair<int,int> d[10000];
    int val=s;
    for(int i=0;i<n;i++){
        //int x,y;
        //cin>>x>>y;
        //d.insert{x,y};
        cin>>d[i].first>>d[i].second;

    }
    sort(d,d+n);
    //for(auto i = d.begin();i!=i++)
    for(int i=0;i<n;i++){
        if(val<= d[i].first){
            //cout<<i->first<<i->second<<endl;
            cout<<"NO"<<endl;
            return;
        }
        else{
            val+=d[i].second;
        }
    }
    cout<<"YES"<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}