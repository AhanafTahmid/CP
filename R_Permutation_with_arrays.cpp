#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int ar[n];
    int ar2[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar,ar+n);
    for(int i=0;i<n;i++){
        cin>>ar2[i];
    }
    sort(ar2,ar2+n);
    for(int i=0;i<n;i++){
        if(ar[i]!=ar2[i]){
            cout<<"no"<<endl;
            return;
        }
    }
    cout<<"yes"<<endl;

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}