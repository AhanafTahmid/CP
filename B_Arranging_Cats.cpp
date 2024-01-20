#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    vector<char> a(n);
    vector<char> b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }  
    ll act = 0, bct = 0;

    for(int i=0;i<n;i++){
        if(a[i]==b[i]){
            continue;
        }      
        if(a[i]=='1') act++;
        if(b[i]=='1') bct++;
        
    }

    cout<<max(act,bct)<<endl;

}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}