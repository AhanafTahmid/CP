#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int p;
    cin>>p;
    int a[10000];
    set<int> all;
    for(int i=0;i<p;i++){
        cin>>a[i];
        all.insert(a[i]);
    }

    int q;
    cin>>q;
    int b[10000];
    for(int i=0;i<q;i++){
        cin>>b[i];
        all.insert(b[i]);
    }

    long long s2 = 0;
    for(auto x: all){
        s2+=x;
    }
    long long s1 = (n*(n+1)/2);
    if(s1==s2){
        cout<<"I become the guy.";
    }
    else cout<<"Oh, my keyboard!";



}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}