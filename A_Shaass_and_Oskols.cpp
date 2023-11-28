#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int ar[1000];
    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }
    int m;
    cin>>m;

    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        ar[x-1]+=(y-1);
        ar[x+1]+=(ar[x]-y);
        ar[x]=0;
        
    }

    for(int i=1;i<=n;i++){
        cout<<ar[i]<<endl;
    }

}

int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}