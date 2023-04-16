#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a[1000][1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int s1=0,s2=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                s1+=a[i][j];
            }
        }
    }

    for(int i=0,j=n-1;i<n;i++,j--){
        s2+=a[i][j];
    }
    cout<<abs(s1-s2)<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}