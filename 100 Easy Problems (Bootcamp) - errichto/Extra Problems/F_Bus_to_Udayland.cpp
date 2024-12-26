#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;
    cin>>n;
    char ch[1005][1005];
    int f = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            cin>>ch[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            if(ch[i][j]=='O' && ch[i][j+1]=='O'){
                //cout<<'11'<<endl;
                ch[i][j] = '+';
                ch[i][j+1] = '+';
                f = 1;
                break;
            }
        }
        if(f)break;
    }

    if(f){
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<5;j++){
                cout<<ch[i][j];
            }
            cout<<endl;
        }
    }
    else cout<<"NO"<<endl;

}


signed main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}