#include <bits/stdc++.h>
using namespace std;
void solve(){
    string ar;
    cin>>ar;
    int z=0,one=0;
    for(int i=0;i<ar.size()-1;i++){
        if(ar[i]=='0' && ar[i+1]=='0') z++;
        if(ar[i]=='1' && ar[i+1]=='1') one++;
    }
    

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}