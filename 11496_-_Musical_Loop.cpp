#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a[1000000], n, ans;
        bool godown, goup;
        while (scanf("%d", &n) && n) {
            for (int i=0; i<n; i++)
                scanf("%d", &a[i]);
            godown = goup = false;
            ans = 0;
            if (a[n-1]<a[0]) goup = true;
            else godown = true;
            a[n] = a[0];
            for (int i=1; i<=n; i++)
                if (a[i-1]<a[i] && godown) {
                    ans++;
                    godown = false; goup = true;
                }
                else if (a[i-1]>a[i] && goup) {
                    ans++;
                    godown = true; goup = false;
                }
            printf("%d\n", ans);
        }
    
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}