#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,h;
    cin>>n>>h;
    vector<int>ct;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar.begin(),ar.end());
    int c = 1;
    for(int i=0;i<n-1;i++){
        if(abs(ar[i]-ar[i+1])<=h || abs(ar[i]-ar[i+1])==0){
            c+=1;
        }
        else{
            ct.push_back(c);
            c = 0;
        }
        cout<<c;
        
        //if(c!=0)
        //cout<<c;
    }
    sort(ct.begin(),ct.end(),greater<int>());
    if (!ct.empty()) {
       // cout << n - ct[0] << endl;
    } else {
        //cout << 0 << endl;
    }

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}