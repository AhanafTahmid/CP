#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int x = n/2, y = n/2;
    int v = n * n;
    if( n % 2 == 0) x--;
    vector<vector<int>>mat(n, vector<int>(n, -1));
    int ct = 0, ok = 0, val = 0;
    //set<int>st;
    //st.insert(val);
    int top = 0, bottom = n-1, left = 0, right = n-1;
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) mat[top][i] = n*n -1 - val,val++;
        top++;
        for (int i = top; i <= bottom; i++) mat[i][right] = n*n -1 - val,val++;
        right--;
        if (top <= bottom) {
            for (int i = right; i >= left; i--) mat[bottom][i] = n*n -1 - val,val++;
        }
        bottom--;
        if (left <= right) {
            for (int i = bottom; i >= top; i--) mat[i][left] = n*n -1 - val,val++;
        }
        left++;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<< mat[i][j] << " ";
        }
        cout<<endl;
    } 

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}