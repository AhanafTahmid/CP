#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,c=0,i;
    cin>>n;
    vector<int> ar(n);
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    for(i=0;i<n;i++){
        if(ar[i]!=-1){
            i+=ar[i+1];
        }
        else{
            c++;
        }
    }
    cout<<c<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}