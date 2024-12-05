#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    if(is_sorted(a.begin(),a.end())){
        cout<< 0 <<endl;
        return;
    }
    vector<array<int, 2>> v;
    int cc = 0;
    for(int i=0;i<100000;i++){
        int l1 = 0, r1 = n-1;
        cc = 0;
        while(l1<=r1){
            if(a[l1]==0 || a[l1]==2)l1++;
            else{
                while(l1<=r1){
                    if(a[r1]==2 || a[r1] == 1)r1--;
                    else{
                        v.push_back({l1,r1});
                        swap(a[l1],a[r1]);
                        cc = 1;
                        l1++;
                        r1--;
                        break;
                    }
                }
            }
        }

        // for(auto x: a)cout << x << ' ';
        // cout<<endl;

        l1 = 0, r1 = n-1;
        while(l1<=r1){
            if(a[l1]==0 || a[l1]==1)l1++;
            else{
                while(l1<=r1){
                    if(a[r1]==2 || a[r1] == 0)r1--;
                    else{
                        v.push_back({l1,r1});
                        swap(a[l1],a[r1]);
                        cc = 1;
                        l1++;
                        r1--;
                        break;
                    }
                }
            }
        }
        if(!cc)break;
    }
    
    cout<< v.size() <<endl;
    for(auto x: v)cout<< x[0] + 1 << ' ' << x[1] + 1 <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}