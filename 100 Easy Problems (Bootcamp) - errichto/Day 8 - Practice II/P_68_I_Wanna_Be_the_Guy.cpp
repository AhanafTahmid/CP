#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int n;
    cin>> n;
    int na;
    cin>> na;
    set<int> st;
    for(int i=0;i<na;i++){
        int x; cin>> x;
        if(x==0) continue;
        st.insert(x);
    }
    int nb;
    cin>>nb;
    for(int i=0;i<nb;i++){
        int x; cin>> x;
        if(x==0) continue;
        st.insert(x);
    }
    if(st.size()==n)cout<<"I become the guy."<<endl;
    else cout<< "Oh, my keyboard!" <<endl;


}


int main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}