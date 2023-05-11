#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,qq,q[100000],ar[100000];
    cin>>n>>qq;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int f;
    for(int j=0;j<qq;j++){
        cin>>q[j];
        int l = 0;
        int r = n-1;
        while(l<=r){
            f = 0;
            int mid = (l+r)/2;
            if(ar[mid]==q[j]){
                f = 1;
                break;
            }
            else if(ar[mid]<q[j]){
                l = mid+1;
            }
            else if(ar[mid]>q[j]){
                r = mid-1;
            }
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}