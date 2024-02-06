#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int n;
    cin>> n;
    vector<int> a;
    for(int i=0;i<n;i++){
        int x;cin>> x;
        a.push_back(x);
    }
    if(n<=3)cout<<0<<endl;
    else{
        sort(a.begin(),a.end());
        cout<< 1LL * a[a.size()-4] * a[a.size()-4] <<endl;
    }

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}