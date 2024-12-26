#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n=4,k=1;
    //cin>>n>>k;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int f = 0;
        int c  = 0;
        int l = s.size();
        for(int j=0;j<l;j++){
            //cout<<s[j];
            if(i==1 && s[j]=='v'){
                cout<<s[j];
                c++;
                i+=1;
                cout<<s[j];
            }
            else if(i==2 && s[j]=='i'){
                c++;
                i+=1;
                cout<<s[j];
            }
            else if(i==3 && s[j]=='k'){
                c++;
                i+=1;
                cout<<s[j];
            }
            else if(i==4 && s[j]=='a'){
                c++;
                i+=1;
                cout<<s[j];
            }
            if(c==4){
                f = 1;
                break;
            }
        }

        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}