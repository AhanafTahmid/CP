#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<char> st;
    for(int i=0;i<n;i++){
        st.insert(s[i]);
    }

    int ans = INT_MAX;
    int f = 1;
    int ct = 0;
    for(auto ch: st){
        int l = 0, r = n-1,ct = 0,f = 1;
        while(l<r){
            if(s[r]!=s[l]){
                if(s[r]==ch){
                    r--;
                    ct++;
                }
                else if(s[l]==ch){
                    ct++;
                    l++;
                }
                else{
                    f = 0;
                    break;
                }

            }
            else{
                l++;
                r--;
            }
        }
        if(f==1) ans = min(ans, ct);
    }  
    
    if(ans==INT_MAX)cout<<-1<<endl;
    else cout<<ans<<endl;

}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}