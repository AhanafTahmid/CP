#include <bits/stdc++.h>
using namespace std;

int divi(int n, int ct){
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            ct++;
            if(i!=n/i) ct++;
        }
    }
    return ct;
}

void solve(){
    int n;
    cin>>n;
    int c = 0;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            int k = divi(i,0);
            if(k==8) c++;
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