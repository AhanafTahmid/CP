//1 onekgula thakle jog kore gun
// 1 1 ta thakle jog only
// 1 gular modde abar gun hbe

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>ones,a, b;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x==1)ones.push_back(1);
        else b.push_back(x);
    }

    string ans = "";
    if(ones.size() == n){
        if( n == 1 )  ans+= '1';
        else if(n==2) ans += "1*1";
        else if(n==3) ans += "1+1+1";
        else if(n==4) ans += "1+1+1+1";
        else{
            int times = (ones.size()/3);
            for(int i=0;i<times;i+=1) {
                ans+= "(1+1+1)*";
            }
            int rem = ones.size() - times*3;
            if (rem == 0){
                for(int i = 0; i< ans.size()-1;i++){
                    cout<< ans[i];
                }
                return;
            }
            else if(rem == 2){
                ans+= "(1+1)";
                cout<< ans <<endl;
                return;
            }
            else{
                ans[ans.size()-2] = '+';
                ans[ans.size()-1] = '1';
                ans+= ')';
                cout<< ans <<endl;
                return;
            }
            
        }
        cout<< ans << endl;
        return;
        
    }
    else if( ones.size() == 0 ){
        ans+= '(';
        for(int i=0;i<b.size()-1;i++){
            ans+= to_string(b[i]);
            ans+= '*';
        }
        ans+= to_string(b[b.size()-1]);
        ans+= ')';
        cout<< ans <<endl;
        return;
    }

    sort(b.begin(),b.end());
    if(ones.size()==1){
        ans+= "(1+";
        string tmp = to_string(b[0]);
        ans+= tmp;
        ans+=")";
        for(int i=1;i<b.size();i++){
            ans+= '*';
            ans+= to_string(b[i]);
        }
    }
    else{

        n = ones.size();
        if( n == 1 )  ans+= "1*";
        else if(n==2) ans += "(1+1)*";
        else if(n==3) ans += "(1+1+1)*";
        else if(n==4) ans += "(1+1+1+1)*";
        else{
            int times = (ones.size()/3);
            for(int i=0;i<times;i+=1) {
                ans+= "(1+1+1)*";
            }
            int rem = ones.size() - times*3;
            if(rem == 2){
                ans+= "(1+1)*";
            }
            else{
                ans[ans.size()-2] = '+';
                ans[ans.size()-1] = '1';
                ans+= ')';
            }
        }

        for(int i=0;i<b.size();i++){
            if(ans.back()!='*')ans+= '*';
            ans+= to_string(b[i]);
        }

    }
    
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}