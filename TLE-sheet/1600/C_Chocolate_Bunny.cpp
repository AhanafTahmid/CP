#include <bits/stdc++.h>
using namespace std;
#define int long long

int query(int x, int y) {
    cout << "? " << x << ' ' << y << endl;
    int q;cin >> q;
    return q;
}

void solve(){
    int n;cin>>n;
    vector<int>a(n+1);
    set<int>st;
    if(n==1){
        cout<< "! 1" <<endl;
        return;
    }

    int j = 1;
    for(int i=2;i<=n;i++){
        int q1 = query(j, i);//why ulta krle kaj kre na
        int q2 = query(i, j);
        if( q1<q2 ){
            a[i] = q2;
        }
        else{
            a[j] = q1;
            j = i;
        }
    }
    
    a[j] = n;
    cout<< "! ";
    for(int i=1;i<=n;i++)cout<< a[i] << ' ';
    cout<<endl;
}

int32_t main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}