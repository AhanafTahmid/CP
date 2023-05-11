#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,q;
    cin>>n>>q;
    //int ar[1000000];
    vector<int> ar(n);
    int que[1000000];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    for(int i=0;i<n;i++){
        cin>>que[i];
        int l = -1;
        int r = n;
        while(l+1<r){
            int mid = (l+r)/2;
            if(ar[mid]<=que[i]){
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