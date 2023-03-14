#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    string b;
    cin >> b;
    int cnt = 0;
    for (int j = 0; j < n - 1; j++){
      if (s[j] == s[j + 1]){
        cnt++;
      }
    }
    for (int j = 0; j < m - 1; j++){
      if (b[j] == b[j + 1]){
        cnt++;
      }
    }
    if (s[n - 1] == b[m - 1]){
      cnt++;
    }
    if (cnt <= 1){
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
}
    



int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}