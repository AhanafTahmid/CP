#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int j=1;j<=t;j++) {
        int n, b_ct=0, a_ct=0, w_ct=0, t_ct=0;
        string a;
        cin >> n >> a;
        for(int i=0; i<n; i++) {
            if(a[i] == 'B') b_ct++;
            else if(a[i] == 'W') w_ct++;
            else if(a[i] == 'T') t_ct++;
            else if(a[i] == 'A') a_ct++;
        }
        cout << "Case " << j << ": ";
        if(a_ct == n && b_ct+w_ct == 0) cout << "ABANDONED";
        else if(b_ct+a_ct == n && w_ct == 0 && t_ct == 0) cout << "BANGLAWASH";
        else if(w_ct+a_ct == n && b_ct == 0 && t_ct == 0) cout << "WHITEWASH";
        else if(b_ct > w_ct) cout << "BANGLADESH " << b_ct << " - " << w_ct;
        else if(b_ct < w_ct) cout << "WWW " << w_ct << " - " << b_ct;
        else if(b_ct == w_ct) cout << "DRAW " << b_ct << " " << t_ct;
        cout << endl;
    }
    return 0;
}
