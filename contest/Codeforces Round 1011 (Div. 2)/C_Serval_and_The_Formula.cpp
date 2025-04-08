#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int x, y;cin>>x>>y;
    if( x == y ) cout<<-1<<endl;
    else cout<< (1<<30) - max(x,y) <<endl;
}

/*************  ✨ Codeium Command ⭐  *************/
/**
 * Main function to handle input and execute test cases.
 * 
 * This function sets up the input/output synchronization for faster processing.
 * It reads an integer `t` from the input, which represents the number of test cases.
 * For each test case, it calls the `solve` function to process and output the result.
 * 
 * @return Always returns 0, indicating successful execution.
 */

/******  28b75429-3743-414b-be84-815796cd42d3  *******/
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}