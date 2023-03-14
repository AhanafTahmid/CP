#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int j=1;j<=t;j++){
        int n,b_ct=0,a_ct=0,w_ct=0,t_ct=0;
        string a;
        cin>>n;
        cin>>a;
        for(int i=0;i<n;i++){
            if(a[i]=='B'){
                b_ct++;
            }
            else if(a[i]=='W'){
                w_ct++;
            }
            else if(a[i]=='T'){
                t_ct++;
            }
            else if(a[i]=='A'){
                a_ct++;
            }
        }
        if(b_ct>=1 && w_ct==0 && a_ct>=0) cout<<"Case "<<j<<": BANGLAWASH"<<endl;
        else if(w_ct>=1 && b_ct==0 && a_ct>=0) cout<<"Case "<<j<<": WHITEWASH"<<endl;
        else if(b_ct>w_ct) cout<<"Case "<<j<<": BANGLADESH "<<b_ct<<" - "<<w_ct<<endl;
        else if(b_ct<w_ct) cout<<"Case "<<j<<": WWW "<<w_ct<<" - "<<b_ct<<endl;
        else if(a_ct==n) cout<<"Case "<<j<<": ABANDONED"<<endl;
        else if(b_ct==w_ct) cout<<"Case "<<j<<": DRAW "<<b_ct<<" "<<b_ct<<endl;


    }
    return 0;
}