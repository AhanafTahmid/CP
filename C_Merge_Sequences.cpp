#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n1,n2;
    cin>>n1;
    cin>>n2;
    vector<int> ar;
    vector<int> ar1={};
    vector<int> ar2={};
    for(int i=1;i<=n1;i++){
        int x;
        cin>>x;
        ar.push_back(x);
        ar1.push_back(x);
    }
    for(int i=0;i<n2;i++){
        int y;
        cin>>y;
        ar.push_back(y);
        ar2.push_back(y);
    }
    sort(ar.begin(),ar.end());
    int total = n1+n2;
    for(int i=0;i<total;i++){
        if(ar1[i]==ar[i]){
             cout<<i+1<<" ";
        }
    }
    cout<<endl;
    for(int i=0;i<total;i++){
        if(ar2[i]==ar[i]) cout<<i+1<<" ";
    }
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}