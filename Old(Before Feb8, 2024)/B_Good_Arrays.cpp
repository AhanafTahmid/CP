#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<long long> ar(n);
    long long s = 0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        s+=(ar[i]%10);
    }
    int f =0;
    for(int i=0;i<n-1;i++){
        if(ar[i]!=ar[i+1]){
            f=1;
            break;
        }
    }
    int k = ar.size()%2;
    int l = s%2;
    if(ar.size()==1 || !f || k!=l){
        cout<<"NO"<<endl;
    }
    else{
       cout<<"YES"<<endl;
    }
    
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}