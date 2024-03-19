//got wa for empty string, the answer is yes for this
//string cin does not take empty characters, but getline does, so use getline

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;getline(cin,s);
    int ln = s.size();
    stack<char> st;
    for(int i=0;i<ln;i++){
        if(s[i]=='(')st.push('(');
        else if(s[i]=='[')st.push('[');

        else if(s[i]==')'){
            if(!st.empty() && st.top()=='(')st.pop();
            else{
                cout<<"No"<<endl;
                return;
            }
        }
        
        else if(s[i]==']'){
            if(!st.empty() && st.top()=='[')st.pop();
            else{
                cout<<"No"<<endl;
                return;
            }
        }
    }
    if(st.empty())cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    cin.ignore();
    while(t--)solve(); 
    return 0;
}