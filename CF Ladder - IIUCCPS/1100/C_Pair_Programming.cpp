#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int k, n, m;cin>>k>>n>>m;
    vector<int>a(n);
    vector<int>b(m);
    vector<int>c;
    vector<int>zero;
    for(int &i: a){cin>>i ;if(i!=0)c.push_back(i);if(i==0)zero.push_back(i);}
    for(int &i: b){cin>>i ;if(i!=0)c.push_back(i);if(i==0)zero.push_back(i);}

    int mx = *max_element(c.begin(),c.end());
    if(mx>zero.size()+k)cout<<-1<<endl;
    else{
        sort(c.begin(),c.end());
        int i =0;
        for(i=0;i<zero.size() && i<c.size();i++){
            cout<<0<<' '<<c[i]<<' ';
        }
        
        for(int j=i;j<c.size();j++)cout<<c[j]<<" ";
        cout<<endl;
        
    }


}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}