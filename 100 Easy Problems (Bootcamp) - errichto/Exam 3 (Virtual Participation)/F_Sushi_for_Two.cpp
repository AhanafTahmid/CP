#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int n;
    cin>>n;
    int ar[n+1];
    vector<int> ans;

    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int ct = 1;
    for(int i=0;i<n-1;i++){
        if(ar[i]==ar[i+1]){
            ct++;
        }
        else if(ar[i]!=ar[i+1]){
            ans.push_back(ct);
            ct = 1;
        }
    }
    ans.push_back(ct);
    int mx = 0;
    for(int i=0;i<ans.size()-1;i++){
        mx = max( min(ans[i],ans[i+1]), mx );
    }
    cout<< mx * 2 <<endl;

}


int main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}



