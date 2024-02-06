//Tutorial: https://www.geeksforgeeks.org/find-the-number-of-divisors-of-all-numbers-in-the-range-1-n/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void findDivisors(int n)
{
    int ans = 0;
     for (int i = 1; i <= n; i++) {
        ans+=(n/i);
    }
    cout<< ans <<endl;
}
 

void solve(){
    int n;
    cin>> n;
    findDivisors(n);
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}