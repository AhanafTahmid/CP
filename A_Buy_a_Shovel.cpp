#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b;
    cin>>a>>b;
    int m=-10,c=1;
    while(1){
        if(m==b || m==0){
            cout<<c-1<<endl;
            return;
        }
        m = (a*c)%10;
        c++;
    }
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}