#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int ar[n+1];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    // vector<int> p;
    // int k = 0;
    // while(n>=pow(2,k)){
    //     p.push_back(pow(2,k));
    //     k++;
    // }

    for(int i=0;i<n-1;i++){
        if(ar[i]>ar[i+1]){
                if(1!=(i+1) && 2!=(i+1) && 4!=(i+1) && 8!=(i+1) && 16!=(i+1)){
                    cout<<"NO"<<endl;
                    return;
                }
            
        }
    }
    cout<<"YES"<<endl;
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}