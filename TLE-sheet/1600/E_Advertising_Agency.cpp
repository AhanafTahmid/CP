#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int md = 1e9+7;

int factorial[10001000];

int binpow(int a, int b, int m) {
    int res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a)%m;
        a = (a * a) %m;
        b >>= 1;
    }
    return res;
}

void precalculateFactorials(int n) {
    factorial[0] = 1;
    for (int j = 1; j <= n; j++) {
        factorial[j] = (factorial[j - 1] * j) % md;
    }
}

// nCr = n! / (r!(n-r)!)
int binomial_coefficient(int n, int r){
    //Numerator = factorial[a]
    int numerator = factorial[n];
    //Determinator
    //Denominator, first find the factorial(tt = ((n-r)!*r!) ) then binexpo(tt,M-2,M); = a^(M-2)%M
    int denominator = (factorial[r] * factorial[n-r]) %md;//t
    int denominator2 = binpow(denominator, md-2, md);//binexpo(tt,M-2,M); = a^(M-2)%M
    int ans = (numerator * denominator2)%md;
    return ans;
}

void solve(){
    int n, k;cin>>n>>k;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    sort(a.begin(),a.end());
    int ct = 0, ct2 = 0;
    for(int i=0;i<n;i++){
        if( i<n-k && a[i] == a[n-k] ) ct++;
        else if( i>=n-k && a[i] == a[n-k] ) ct2++;
    }

    int ans = binomial_coefficient(ct2+ct,ct);
    ans%=md;
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    precalculateFactorials(1000100);
    cin >> t;
    while(t--)solve(); 
    return 0;
}