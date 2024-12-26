#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s1;cin>>s1;
    int n = s1.size();
    vector<char>s(n+1);
    for(int i=1;i<=n;i++){
        s[i] = s1[i-1];
    }
    int ct1 = 0, ct2 = 0, one = 0, two = 0;
    //1 wins
    for(int i=1;i<=n;i++){
        if(i%2 && s[i]!='0') ct1++;
        if(i%2==0 && s[i]=='1') ct2++;

        if(ct1-ct2 >=3 && (i==6 || i==7) ){
            one = i;
            break;
        }
        if(ct1-ct2  >=2 && (i==8 || i==9) ){
            one = i;
            break;
        }
    }
    if(!one) one = 10;

    ct1 = 0, ct2 = 0;
    //or 2 wins
    for(int i=1;i<=n;i++){
        if(i%2 && s[i]=='1') ct1++;
        if(i%2==0 && s[i]!='0') ct2++;

        if(ct2-ct1 >=3 && i==6){
            two = i;
            break;
        }

        if(ct2-ct1 >= 2 && (i==7 || i==8)){
            two = i;
            break;
        }
        if(ct2-ct1 >= 1 && i==9){
            two = i;
            break;
        }
    }
    if(!two) two = 10;

    cout<< min(one, two) <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}