#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int c = 0;
    int a[1000], b[1000];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==b[j]){
                c++;
            }
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