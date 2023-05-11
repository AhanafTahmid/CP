#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,m,val,b[10000];
    cin>>n>>m;
    queue<int> ar;
    int aa[10000];
    for(int i=1;i<=n;i++){
        cin>>aa[i];
        ar.push(i);
    }
    int j =1;
    int z;
    while(!ar.empty()){
        z = ar.front();
        aa[z]-=m;
        if(aa[z]>0){
            ar.push(z);
        }
        ar.pop();
        cout<<z<<endl;
    }

        //cout<<z<<endl;
    
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}