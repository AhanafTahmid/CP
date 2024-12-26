#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long a,b,gcd=1,lcm=1;
    cin>>a>>b;
    //gcd
    for(long long i=2;i<a;i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
    //lcm
    for(long long i=2;i<a;i++){
        if(a%i==0 && b%i==0){
            lcm*=i;
        }
    }

    cout<<gcd<<" "<<lcm<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}