#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int tmp;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(ar[j]<ar[i]){
                tmp = ar[i];
                ar[i]=ar[j];
                ar[j]=tmp;
            }
            
        }
        
    }

    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}