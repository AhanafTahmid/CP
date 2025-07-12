#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

bool f(vector<int>& arr, int ind, int curr, int target) {
    if (ind == arr.size()) {
        return curr == target;
    }

    if (f(arr, ind + 1, curr + arr[ind], target)) return true;
    if (f(arr, ind + 1, curr - arr[ind], target)) return true;
    if (f(arr, ind + 1, curr, target)) return true;
    return false;
}

void solve(){
    int n, x; cin >> n >> x;
    vector<int> arr(n);
    for(int &i: arr)cin>>i;
    if (f(arr, 0, 0, x))  cout<< "Yes" <<endl;
    else cout<< "No" <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}