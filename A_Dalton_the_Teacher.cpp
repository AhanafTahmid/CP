#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int ct = 0;
    int ar[100000];
    for(int i=1;i<=n;i++){
        cin>>ar[i];
        if(i==ar[i]) ct++;
        
    }
    ct==0?cout<<0<<endl:cout<<ceil(ct/2.0)<<endl;
    
   
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}