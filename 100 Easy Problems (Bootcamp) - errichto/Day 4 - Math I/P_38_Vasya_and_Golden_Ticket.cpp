#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
bool ok(int x){
    return (x%2==0 || x%3==0 || x%5==0 || x%7==0) && ((x/2>1) || (x/3>1) || (x/5>1) || (x/7>1) || (x/11>1));
}

void solve(){
    int n;
    cin>>n;
    string s;
    cin >>s;
    int sum = 0;
    for_each(s.begin(),s.end(),[&sum](char x){sum+=(x-'0');});
    int noo = (sum%2!=0 && sum%3!=0);
    if(noo)cout<<"NO"<<endl;
    cout<< ok(sum)
    else if(ok(sum))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}