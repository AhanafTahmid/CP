#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,c=0;
    cin>>n;
    int ar[200][200];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;i++){
            cin>>ar[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<2;i++){
            if(ar[i][0]==ar[i][j]) c++;
        }
    }

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}