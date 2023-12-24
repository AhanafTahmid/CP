#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long a,b;
    cin>>a>>b;
    long long c = 0;
    for(long long i=1;i<=a;i++){
        for(long long j=1;j<=b;j++){
            if((i+j)%5==0) cout<<i<<" "<<j<<endl;//c++;
        }
    }
    cout<<c<<endl;

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}