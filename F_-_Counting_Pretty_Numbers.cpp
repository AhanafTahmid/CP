#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c=0,i;
    cin>>a>>b;
    for(i=a;i<=b;i++){
        if(i%10==2 || i%10==3 || i%10==9){
            c++;
        }
    }
    cout<<c<<endl;
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}