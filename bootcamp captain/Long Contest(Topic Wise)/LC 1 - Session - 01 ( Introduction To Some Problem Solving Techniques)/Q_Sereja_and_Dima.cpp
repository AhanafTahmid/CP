#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void two_pointer(int ar[], int n){
    int l = 0, r = n-1;
    int s1 = 0, s2 = 0, stp = 0;
    while(l<r){
        if(!(stp%2)){
            if(ar[l]>ar[r]) s1+=ar[l],l++;
            else s1+=ar[r],r--;
        }
        else{
            if(ar[l]>ar[r]) s2+=ar[l],l++;
            else s2+=ar[r],r--;
        }
        stp++;
    }
    if(!(n%2)) cout<< s1 <<" "<<s2+ar[r] <<endl;
    else cout<< s1+ar[l] <<" "<<s2 <<endl;

}

void solve(){
    int n;cin>>n;
    int ar[n+1];
    for(int i=0;i<n;i++)cin>>ar[i];
    two_pointer(ar, n);
}


signed main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}