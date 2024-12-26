#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);

    vector<pair<int, pair<int, int>>> pr;
    vector<pair<int, pair<int,int>>> pr2;
    vector<pair<int, pair<int,int>>> pr3;
    int ct = 0;
    ct++;
    for(int i=0;i<n;i++){
        cin>>a[i];
        pr.push_back({ct, {a[i], i}});
    }
    ct++;
    for(int i=0;i<n;i++){
        cin>>b[i];
        pr2.push_back({ct, {b[i], i}});
    }
    ct++;
    for(int i=0;i<n;i++){
        cin>>c[i];
        pr3.push_back({ct, {c[i], i}});
    }

    sort(pr.begin(),pr.end(),greater<pair<int, pair<int,int>>>());
    sort(pr2.begin(),pr.end(),greater<pair<int, pair<int,int>>>());
    sort(pr3.begin(),pr3.end(),greater<pair<int, pair<int,int>>>());

    for(int i=0;i<ct;i++){
        
       
        cout<<pr[i].first<<" "<<pr[i].second.first<<endl;
        
    }


}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}