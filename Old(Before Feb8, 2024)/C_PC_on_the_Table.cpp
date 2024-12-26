#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    string ar;
    for(int i=0;i<n;i++){
        cin>>ar;
        for(int j=0;j<k;j++){
            if(ar[j]=='T' && ar[j+1]=='T' && ar[j+2]=='T'){
                ar[j]='P';
                ar[j+1]='C';
                ar[j+2]='T';
                j+=2;
                //cout<<j;
                //continue;
            }
            else if(ar[j]=='T' && ar[j+1]=='.' && ar[j+2]=='T'){
                j+=2;
                continue;
            }
            else if(ar[j]=='T' && ar[j+1]=='T'){
                ar[j]='P';
                ar[j+1]='C';
                j+=2;
                //continue;
            }
            else if(ar[j]=='T'){
                ar[j]='P';
            }
        }
        cout<<ar<<endl;
    }
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}