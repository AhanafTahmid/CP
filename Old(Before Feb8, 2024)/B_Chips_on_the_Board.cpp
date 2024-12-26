#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int ar[n+10],ar2[n+10];
    
    long long s1 = 0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        s1+=ar[i];
    }
    for(int i=0;i<n;i++){
        cin>>ar2[i];
    }
    sort(ar2,ar2+n);
    long long int s2 = ar2[0]*n;
    long long s = s1+s2;
    cout<<s<<endl;
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}