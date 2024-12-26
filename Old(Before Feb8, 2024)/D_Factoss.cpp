#include <bits/stdc++.h>
using namespace std;
int s = 1, ans  = 0;
void f(int n,int i){
    if(s>=n){
        cout<<i<<endl;
        cout<<s<<endl;
        cout<<ans<<endl;
        return;
    }
    //i++;
    s*=i;
    ans +=i;
    f(n,i+1);
    //i*=f(n,i) + f(n-1,i);
    
}

void solve(){
    int n;
    cin>>n;
    f(n,1);
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}