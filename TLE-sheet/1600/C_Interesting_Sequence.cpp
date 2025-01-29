#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, x;cin>>n>>x;

    if(n==x){
        cout<< n << endl;
        return;
    }

    int m = 0;
    if( x == 0){
        int v = log2(n);
        v++;
        m|= (1LL<<v);
        cout<< m <<endl;
        return;
    }

    int start = -1;
    for(int i=61;i>=0;i--){
        bool v1 = n & (1LL<<i);
        bool v2 = x & (1LL<<i);
        if( start == -1 && v1 == v2 && v1 == 1){
            start = i;
        }
        if( v2 == 1 && v1 == 0 ){
            cout<< -1 <<endl;
            return;
        }
    }

    int p1 = log2(n);
    int p2 = log2(x);
    if(p1!=p2){
        cout<< -1 <<endl;
        return;
    }

    int st = -1;
    for(int i=61;i>=0;i--){
        bool v1 = n & (1LL<<i);
        bool v2 = x & (1LL<<i);
        if( v1 == 1 && v2 == 0 ){
            st = i;
            break;
        }
    }

    for(int i=st;i>=0;i--){
        bool v1 = n & (1LL<<i);
        bool v2 = x & (1LL<<i);
        if( v2 == 1 ){
            cout<< -1 <<endl;
            return;
        }
    }

    int vvv = -1;
    for(int i=start;i>=st;i--){
        bool v1 = n & (1LL<<i);
        bool v2 = x & (1LL<<i);
        if( v1 == v2 && v1 == 1 ){
            cout<< -1 <<endl;
            return;
        }
        if( v1 == v2 && v2 == 0 ){
            vvv = 100;
        }
    }

    if(vvv==-1){
        cout<< -1 <<endl;
        return;
    }

    bool v1 = n & (1LL<<0);
    bool v2 = x & (1LL<<0);
    if( v1 == v2 && v1 == 1){
        cout<< -1 <<endl;
        return;
    }
    
    int s = 0;
    for(int i=61;i>=0;i--){
        bool v1 = n & (1LL<<i);
        if(s == 0 && v1 == 1){
            s+=1;
            m|= (1LL<<i);
        }
        else if(s==1 && v1==1){
            m|= (1LL<<(i+1));
            break;
        }
    }
    cout<< m <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}