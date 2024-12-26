#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string a,b;cin>>a>>b;
    int na = a.size(), nb = b.size();
    bool ok = 0;
    for(int i=0,j=0;i<na;i++){
        if(a[i]==b[j])j++;
        else if(a[i]=='?'){
            a[i] = b[j];
            j++;
        }
        if(j==nb){
            ok = 1;
            break;
        }
    }
    if(!ok)cout<<"NO"<<endl;
    else{
        for(int i=0;i<na;i++){
            if(a[i]=='?')a[i] = 'a';
        }
        cout<< "YES" <<endl;
        cout<< a <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}