#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

class FenwickTree{
private:
    int get_parent(int bit){
        return bit - (bit & -bit);
    }
    
    int get_next(int bit){
        return bit + (bit & -bit);
    }

public:
    int getSum(const vector<int>& BITree, int index){
        int sum = 0;
        index = index + 1;

        while (index > 0){
            sum += BITree[index];
            index = get_parent(index);
        }
        return sum;
    }

    void updateBIT(vector<int>& BITree, int index, int n, int val){
        index = index + 1;

        while (index <= n){
            BITree[index] += val;
            index = get_next(index);
        }
    }

    vector<int> constructBITree(const vector<int>& arr, int n) {
        vector<int> BITree(n + 1, 0);

        for (int i = 0; i < n; i++)
            updateBIT(BITree, i, n, arr[i]);

        return BITree;
    }
};

void solve(){
    int n, q;cin>>n>>q;
    vector<int>a(n),prefix(n+1);
    for(int &i: a)cin>>i;
    FenwickTree ft;
    vector<int>BITree = ft.constructBITree(prefix,n);

    while(q--){
        int l, r;cin>>l>>r;
        ft.updateBIT(BITree, l, r, 1);
        // BITree[l] = ft.getSum(BITree, l);
        // BITree[r] = ft.getSum(BITree, r);
    }

    for(int i=1;i<=n;i++){
        cout<< ft.getSum(BITree, i) << ' ';
    }
    // sort(a.rbegin(),a.rend());
    // sort(prefix.rbegin(),prefix.rend());

    // int ans = 0;

    // for(int i=0;i<n;i++){
    //     ans += (prefix[i] * a[i]);
    // }
    // cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}