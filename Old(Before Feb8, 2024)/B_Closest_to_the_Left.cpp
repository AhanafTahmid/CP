#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,q;
    cin>>n>>q;
    vector<int> ar(n);
    int x;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    for(int i=0;i<q;i++){
        cin>>x;
        int l = -1;
        int r = n;
        while(l+1<r){
            int mid = (l+r)/2;
            if(ar[mid]<=x){
                l = mid;
            }
            else{
                r = mid;
            }

        }
        cout<<l+1<<endl;

    }
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}