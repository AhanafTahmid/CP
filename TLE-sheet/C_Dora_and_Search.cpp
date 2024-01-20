#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    int l=0, r = n-1, ln = n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n<=3) cout<<-1<<endl;
    else{
        int mn = 1, mx = n;
        while(l<r){
            if(a[l] == mn) l++,mn++;    
            else if(a[l] == mx) l++,mx--;

            if(a[r] == mx) r--,mx--;
            else if(a[r] == mn) r--,mn++;

            if(a[l]!=mn && a[l]!=mx && a[r]!=mn && a[r]!=mx){
                cout<<l+1<<" "<<r+1<<endl;
                return;
            }
        }
        cout<<-1<<endl;
        
    }
    
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}