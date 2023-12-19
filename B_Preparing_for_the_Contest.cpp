#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,k;
    cin>>a>>k;
    vector<int> g;//greater
    vector<int> n;//normal

    for(int i=1;i<=a;i++){
        g.push_back(i);
    }
    n = g;
    sort(g.begin(),g.end(),greater<int>());
    sort(n.begin(),n.end());

    int g_times = a-k-1;
    int n_times = k+1;
    

    for(int i=0;i<g_times;i++){
        cout<<g[i]<<" ";
    }

    for(int i=0;i<n_times;i++){
        cout<<n[i]<<" ";
    }
    
    cout<<endl;
   

}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}