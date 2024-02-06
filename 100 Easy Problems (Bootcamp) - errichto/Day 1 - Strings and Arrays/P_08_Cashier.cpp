#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, l, b;
    cin>> n >> l >> b;
    int ans = 0;
    int c1[n+1], c2[n+1];
    if(n==0){
        cout<< l/b <<endl;
        return;
    }
    int x,y;
    int spent = 0;
    for(int i=0;i<n;i++){
        cin>> x >> y;
        if(i==0 && x>b) ans++;
        if((y-x)>b) ans++;
        spent+=y;
    }
    //cout<< spent <<endl;
    if(l-spent<=b){
        cout<< ans <<endl;
        return;
    }
    for(int i=spent;i<l;i+=b){
        ans++;
    }
    cout<< ans <<endl;

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}