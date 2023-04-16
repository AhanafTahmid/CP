#include <bits/stdc++.h>
using namespace std;
void solve(){
    int ar[100][100];
    int v1,v2;
    for(int i=0;i<=4;i++){
        for(int j=0;j<=4;j++){
            cin>>ar[i][j];
            if(ar[i][j]!=0){
                v1 = i;
                v2 = j;
            }
        }
    }
    cout<<abs(v1-2)+abs(v2-2)<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}