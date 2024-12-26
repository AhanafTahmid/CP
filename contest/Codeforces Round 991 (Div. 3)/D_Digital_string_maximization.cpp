#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s, ans="";cin>>s;
    int n = s.size();
    for(int i=0;i<n;i++){
        int mx = s[i] - '0', currmx = 0, best_ind = i;
        for(int j=i, k = 0;j<min(i+9, n);j++,k++){
            currmx = s[j] - '0' - k;
            if(currmx>mx){
                mx = currmx;
                best_ind = j;
            }
        }

        for(int j=best_ind;j>i;j--){
            swap(s[j],s[j-1]);
        }
        ans.push_back(mx+'0');
    }
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}
