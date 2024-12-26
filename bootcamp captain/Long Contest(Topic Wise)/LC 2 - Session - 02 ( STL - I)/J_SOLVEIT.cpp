/*

TC - 1
------
4 3
1 3
1 2
2 4

output: -1

TC - 2
------
4 3
1 3
1 2
2 3

output: 3

TC - 3
------
4 3
1 3
1 2
2 1

output: 2


You have to find immediate greater(if exists) of that given index in type 2.
Also you must use scanf or cin with fastio to take input, otherwise it will give tle

*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int q;cin>>q;
    set<int> st;
    while(q--){
        int x, y;cin>> x >> y;
        if(x==1){
            st.insert(y);
        }
        else if(x==2){
            auto ans = st.lower_bound(y);
            if(*ans >= y) cout<< *ans <<endl;
            else cout<< -1 <<endl;
        }
    }

}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}