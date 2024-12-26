#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    double c=0,v;
    for(int i=1;i<=n;i++){
        if(i%2!=0) c++;
    }
    cout<<setprecision(10)<<fixed<<c/n<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}