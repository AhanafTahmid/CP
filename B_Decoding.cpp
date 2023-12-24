#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    deque<string> ss;
    int nn = n;
    for(int i=0;i<n;i++){
        if(nn%2==1){
            ss.push_back(string(1, s[i]));
            nn--;
        }
        else if(nn%2==0){
            ss.push_front(string(1, s[i]));
            nn--;
        }
    }

    for(auto x:ss){
        cout<<x;
    }
    cout<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}