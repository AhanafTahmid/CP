#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    //long long ar[300000], p[100000]={};
    vector<long long> ar(n+1), p(n+1,0), p2(n+1,0), new_ar(n+1);
    for(int i=1;i<=n;i++){
        cin>>ar[i];
        //cout<<ar[i];
        p[i] = p[i-1] + ar[i];
    }
    int q;
    cin>>q;
    int t,l,r;
    new_ar = ar;
    sort(new_ar.begin()+1,new_ar.begin()+n+1);
    for(int i=1;i<=n;i++){
        
        p2[i] = p2[i-1] + new_ar[i];  
        //cout<<p2[i]<<" ";
        //cout<<new_ar[i]<<" ";
    }
    

    for(int i=1;i<=q;i++){
        cin>>t>>l>>r;
        if(t==1){
            //just summation
            cout<<p[r] - p[l-1] <<endl;
        }
        else if(t==2){
            //non decreasing from l to r
            cout<<p2[r] - p2[l-1] <<endl;
        }
    }
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}