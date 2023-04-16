#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    if(ar.front()==ar.back()) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        cout<<ar.front()<<" "<<ar.back()<<" ";
        for(int i=1;i<n-1;i++){
            cout<<ar[i]<<" ";
        }
        cout<<endl;
    }
    
    
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}