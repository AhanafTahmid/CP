#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    int ar[100000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int f,l;
    cin>>f>>l; 
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                
                //cout<<ar[k];
            }
            cout<<endl;
        }
        //cout<<endl;
    }
    //ar[i]
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}