#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int l = s.size();
    int f = 0;
    for(int i=0;i<l;i++){
        if(s[i]>='A' && s[i]<='Z'){
            f = 1;
        }
        else{
            f =0;
            break;
        }
    }
    int f2=0;
    if(f==1){
        for(int i=0;i<l;i++){
            if(s[i]>='a' && s[i]<='z'){
                s[i]-=32;
            }
            else if(s[i]>='A' && s[i]<='Z'){
                s[i]+=32;
            }
        }
        cout<<s<<endl;
    }
    else{
        for(int i=0;i<l;i++){
            if(s[0]>='a' && s[0]<='z'){
                f2 = 1;
            }
            if(i>0 && s[i]>='a' && s[i]<='z'){
                f2 = 0;
                break;
            }
        }
        if(f2==1){
            for(int i=0;i<l;i++){
                if(s[i]>='a' && s[i]<='z'){
                    s[i]-=32;
                }
                else if(s[i]>='A' && s[i]<='Z'){
                    s[i]^=32;
                }
            }
            cout<<s<<endl;
        }
        else cout<<s<<endl;
    }
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}