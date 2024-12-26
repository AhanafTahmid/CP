#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int ar[100000];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar,ar+n);

    int q;
    cin>>q;
    int lx,ux;
    for(int i=0;i<q;i++){
        cin>>lx>>ux;
        //lower bound position
        int lpos = (lower_bound(ar,ar+n,lx))-ar;
        //lower bound position
        int upos = (upper_bound(ar,ar+n,ux))-ar;
        cout<<upos-lpos<<" ";
    }

    
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}