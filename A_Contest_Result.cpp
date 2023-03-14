#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,s=0;
    cin>>a>>b;
    int ar[10000];
    for(int i=0;i<a;i++){
        cin>>ar[i];
    }
    int pp[100000];
    for(int i=0;i<b;i++){
        cin>>pp[i];
        s+=ar[pp[i]-1];
    }
    cout<<s<<endl;

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}