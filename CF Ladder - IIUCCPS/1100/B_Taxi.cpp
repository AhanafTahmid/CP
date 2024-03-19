#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int ans = 0;
    int one = 0, two = 0, three = 0, four = 0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x==1)one++;
        else if(x==2)two++;
        else if(x==3)three++;
        else if(x==4)four++;
    }
    ans+=four;
    
    if(three<=one){
        ans+=three;
        one-=three;
        three = 0;
    }
    else{
        ans+=three;
        three-=one;
        one = 0;
    }
    ans = ans + (((two*2+one)+4-1)/4);
    cout<< ans <<endl;

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}