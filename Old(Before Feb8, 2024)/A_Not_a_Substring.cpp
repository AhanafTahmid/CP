#include <bits/stdc++.h>
using namespace std;


bool isValid(string s) {
    stack<char> st;
    for (char ch : s) {
        if (ch == '(') {
            st.push(ch);
        } else {
            if (st.empty() || (st.top() != '(' && ch == ')') ) {
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}


void solve(){
    string s;
    cin>>s;
    string a = s+s;

    string b = "()";
    int l = a.size()/2;

    if(isValid(s)==1){
        cout<<"NO"<<endl;
        return;
    }
    else{
        cout<<"YES"<<endl;
        for(int i=0;i<l;i++){
            cout<<b;
        }
    }
    cout<<endl;
    
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}