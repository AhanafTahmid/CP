#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;cin>>s;
    int n = s.size();
    //bitset<100>bset(s);
    for(int i=0;i<n;i++){
        if(s[i]=='0' || s[i]=='8'){
            cout<<"YES"<<endl;
            cout<<s[i]<<endl;
            return;
        }
    }

    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            string tmp="";
            tmp+=s[i];
            tmp+=s[j];
            if(stoi(tmp)%8==0){
                cout<<"YES"<<endl;
                cout<<tmp<<endl;
                return;
            }
        }
    }
    

    for(int l=1;l<125;l++){
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    string tmp="";
                    tmp+=s[i];
                    tmp+=s[j];
                    tmp+=s[k];
                    if(stoi(tmp)==(8*l)){
                        cout<<"YES"<<endl;
                        cout<<8*l<<endl;
                        return;
                    }
                }
            }
        }
    }
    cout<<"NO"<<endl;

    
    

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}