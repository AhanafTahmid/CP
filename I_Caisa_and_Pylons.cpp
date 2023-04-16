#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> ar;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ar.push_back(x);
    }
    sort(ar.begin(),ar.end(),greater<int>());
    cout<<ar[0]<<endl;

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}