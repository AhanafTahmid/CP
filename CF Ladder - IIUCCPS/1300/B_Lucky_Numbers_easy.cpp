#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;cin>>s;
    set<int>st;
    int ln = s.size()/2, ln2 = ln+1;
    string s1(2*ln, 'x');
    fill(s1.begin(),s1.begin()+ln,'4');
    fill(s1.begin()+ln,s1.end(),'7');

    if(ln>0){
        do{
            st.insert(stoll(s1));//cannot convert empty values, that is why ln>0
        }while(next_permutation(s1.begin(),s1.end()));
    }
    
    string s2(2*ln2, 'x');
    fill(s2.begin(),s2.begin()+ln2,'4');
    fill(s2.begin()+ln2,s2.end(),'7');
    do{
       st.insert(stoll(s2));
    }while(next_permutation(s2.begin(),s2.end()));

    cout<< *st.lower_bound(stoll(s)) <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}