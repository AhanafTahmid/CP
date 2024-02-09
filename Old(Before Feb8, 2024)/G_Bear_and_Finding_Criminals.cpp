#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,lim,c=0;
    cin>>n>>lim;
    int i;
    vector<int> ar(n);
    for(int k=0;k<n;k++){
        cin>>ar[k];
    }
   
    lim-=1;
    for(i=0;i<n;i++){
        if(i==0 && ar[lim]==1) c++;
        else if(lim-i<0 && ar[lim+i]==1) c++;
        else if(ar[lim-i]==1 && lim+i>=n) c++;
        else if(ar[lim-i]==1 && ar[lim+i]==1 && lim-i>=0 && lim+i<=n-1) c+=2;
    }
    cout<<c<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}