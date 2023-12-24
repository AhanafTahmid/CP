#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    long long sum = 0;
    string ss = s;
    int c = 0;
    if(ss.size()==1){
        cout<<0<<endl;
        return;
    }
    while(1){
        sum  = 0;
        for(int i=0;i<ss.size();i++){
            //cout<<s[i];
            sum +=(ss[i] - '0');
        }
        ss = to_string(sum);
        c++;
        if(sum>=1 && sum<=9){
            break;
        }
        //cout<<ss<<endl;
    }
    cout<<c<<endl;
    
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}