#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(b>=c){
        b-=c;
        c-=c;
    }
    else if(b<c){
        c-=b;
        b-=b;
    }
    if(a>=b){
        a-=b;
        b-=b;
    }
    else if(a<b){
        b-=a;
        a-=a;
    }
    if(a<=c){
        c-=a;
        a-=a;
    }
    else if(a>c){
        a-=c;
        c-=c;
    }
    if(a) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}