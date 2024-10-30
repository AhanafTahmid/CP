#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;cin>>s;
    int n = s.size(), i = 0, ct = 0, ok = 0;
    set<char>st;
    while(i<n){
        if(s[i]=='?'){
            ct++;
            i++;
        }
        else if(st.count(s[i])==0){
            st.insert(s[i]);
            i++;
        }
        else if(st.count(s[i])==1){
            st.clear();
            st.insert(s[i]);
            i++;
            ct=0;
        }
        
        if(st.size() + ct == 26){
            ok = 1;
            break;
        }
    }
    if(!ok)cout<< -1 <<endl;
    else{
        for(int k=i-26;k<i;k++){
            if(s[k]=='?'){
                for(int j=65;j<91;j++){
                    if(st.count(char(j))==0){
                        s[k] = char(j);
                        st.insert(s[k]);
                        break;
                    }
                }
            }
            
        }
        for(int k=0;k<i-26;k++){
            if(s[k]=='?') s[k] = 'A';
        }
        for(int k=i;k<n;k++){
            if(s[k]=='?') s[k] = 'A';
        }
        cout<< s <<endl;
    }

    string s2 = "TUEJOIPWGNRFYMKSZXHCLBQV";
    sort(s2.begin(),s2.end());
    cout<< s2 <<endl;
    
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}