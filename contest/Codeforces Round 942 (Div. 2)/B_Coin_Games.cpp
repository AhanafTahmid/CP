#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    string s;cin>>s;

    bool ok;
    int ct = 0;
    while(1){
        ok = false;
        int indx = 0;
        n = s.size();
        for(int i=0;i<n;i++){
            if(i+1<n && i==0 && s[i]=='U' && s[i+1]=='U'){
                indx = i;
                ok = true;
                break;
            }
            if(i+1<n && i==n-2 && s[i]=='U' && s[i+1]=='U'){
                indx = i+1;
                ok = true;
                break;
            }

            if(i+1<n && s[i]=='U' && s[i+1]=='U'){
                indx = i+1;
                ok = true;
                break;
            }

            if(s[i]=='U'){
                indx = i;
                ok = true;
            }
        }

        if(!ok)break;

        if(s.size()>2){
            if(indx==0){
                s.back() = s.back() ^ 'U' ^ 'D';
                s[indx+1] = s[indx+1] ^ 'U' ^ 'D';
                s.erase(s.begin()+indx, s.begin()+indx+1);
            }
            else if(indx==n-1){
                s.front() = s.front() ^ 'U' ^ 'D';
                s[indx-1] = s[indx-1] ^ 'U' ^ 'D';
                s.erase(s.begin()+indx, s.begin()+indx+1);
            }
            else{
                s[indx+1] = s[indx+1] ^ 'U' ^ 'D';
                s[indx-1] = s[indx-1] ^ 'U' ^ 'D';
                s.erase(s.begin()+indx, s.begin()+indx+1);
            }
        }
        else{
            s.erase(s.begin()+indx, s.begin()+indx+1);
        }
        ct++;
    }

    cout<< (ct&1?"YES":"NO") <<endl;

    
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}