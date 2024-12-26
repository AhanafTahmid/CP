#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

//1. First make the prefix 
//2. Then fast search in prefix
void solve(){
    int n, q;
    cin>> n >> q;
    string s;
    cin>>s;
    
    int pg[n+1]={},ps[n+1]={};//gold and silver, if both are not true then silver is answer
    for(int i=1;i<=n;i++){
        pg[i] = pg[i-1]+ (s[i-1]=='G');
        ps[i] = ps[i-1]+ (s[i-1]=='S');
    }
    // cout<<endl;
    // for(int i=1;i<=n;i++){
    //     cout<<i<<" = "<<pg[i]<<" "<<endl;
    // }
    // cout<<endl;

    // for(int i=1;i<=n;i++){
    //     cout<<i<<" = "<<ps[i]<<" "<<endl;
    // }
    // cout<<endl;

    while(q--){
        int l, r; cin>> l >> r;
        if((pg[r]-pg[l-1])>0){
            cout<<'G'<<endl;
        }
        else if((ps[r]-ps[l-1])>0){
            cout<<'S'<<endl;
        }
        else cout<<'B'<<endl;
    }

}


int main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}




//Another way

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

//1. First make the prefix 
//2. Then fast search in prefix
void solve(){
    int n, q;
    cin>> n >> q;
    //string s;
    //cin>>s;
    vector<char> all_medal;
    int pg[n+1]={},ps[n+1]={};//gold and silver, if both are not true then silver is answer
    map<char,int> mg;//gold
    map<char,int> ms;//silver
    for(int i=1;i<=n;i++){
        char ch; cin>> ch;
        all_medal.push_back(ch);
        if(ch=='G') mg['G']++, pg[i] = mg['G'], ps[i] = ms['S'];
        else if(ch=='S') ms['S']++, ps[i] = ms['S'], pg[i] = mg['G'];
        else  ps[i] = ms['S'], pg[i] = mg['G'];
    }
    // cout<<endl;
    // for(int i=1;i<=n;i++){
    //     cout<<i<<" = "<<pg[i]<<" "<<endl;
    // }
    // cout<<endl;

    // for(int i=1;i<=n;i++){
    //     cout<<i<<" = "<<ps[i]<<" "<<endl;
    // }
    // cout<<endl;

    while(q--){
        int l, r; cin>> l >> r;
        if(all_medal[l-1]=='G' || all_medal[r-1]=='G'){
            cout<<'G'<<endl;
        }
        else if((pg[r]-pg[l])>0){
            cout<<'G'<<endl;
        }
        else if(all_medal[l-1]=='S' || all_medal[r-1]=='S'){
            cout<<'S'<<endl;
        }
        else if((ps[r]-ps[l])>0){
            cout<<'S'<<endl;
        }
        else cout<<'B'<<endl;
    }

}


int main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}