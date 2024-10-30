#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int a,b,c;
    cin>>a;
    map<int,int> mp;
    set<int> st;
    st.insert(a);
    for(int i=0;i<n;i++){
        cin>>b>>c;
        st.insert(b);
        st.insert(c);
    }
    //cout<<st.size()<<endl;
    if(st.size()<6)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}