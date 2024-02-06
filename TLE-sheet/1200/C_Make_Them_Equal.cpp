#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    char ch;
    cin>>ch;
    string s;
    cin>>s;

    int ct = 0;
    for(int i=0;i<n;i++){
        if(s[i]==ch)ct++;
    }
    if(ct==n){
        cout<<0<<endl;
        return;
    }
    //jodi 1 ta multiple thake 
    // for(int i=n/2;i<n;i++){
    //     if(s[i]==ch){
    //         cout<<1<<endl;
    //         cout<<i+1<<endl;
    //         return;
    //     }
    // }

    for(int i=2;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            if(s[i]==ch){
                cout<<1<<endl;
                cout<<i<<endl;
                return;
            }
        }
    }


    cout<<2<<endl;
    cout<<n<<" "<<n-1<<endl;

   


}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}