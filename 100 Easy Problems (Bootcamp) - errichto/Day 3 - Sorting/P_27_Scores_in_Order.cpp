#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int n;
    cin>> n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int val;
    for(int i=0;i<n;i++){
        val = ar[i];
        int pos = 0;
        for(int j=0;j<=i;j++){
            if(val<=ar[j]) pos++;
        }
        cout<< pos <<endl;
    }
    sort(ar,ar+n,greater<int>());
    for(int x: ar)cout<< x <<" ";
    cout<<endl;

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}