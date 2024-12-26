#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int n;
    cin>>n;
    int ar[n+1];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    
    for(int i=0;i<n-1;i++){
        int minIndex = i;
        int mn = INT_MAX;
        for(int j=i;j<n;j++){
            if(ar[j]<=mn) mn = ar[j], minIndex = j;
        }
        swap(ar[minIndex], ar[i]);
        for(int k=0;k<n;k++)cout<<ar[k]<<" ";
        cout<<endl;
        
    }


}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}