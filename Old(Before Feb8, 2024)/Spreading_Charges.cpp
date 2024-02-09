#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,i;
    string ar;
    cin>>n;
    cin>>ar;
    for(i=0;i<n-2;i++){
        if(ar[i]=='0' && ar[i+1]=='-'){
            ar[i] = '-';
        }
        if(ar[i]=='+' && ar[i+1]=='0' && ar[i+2]!='-'){
            ar[i+1] = '+';
        }
        if(ar[i]=='0' && ar[i+1]=='+'){
            ar[i] = '+';
        }
         if(ar[i]=='-' && ar[i+1]=='0' && ar[i+2]!='+'){
            ar[i+1] = '-';
        }
        
        }
    
    cout<<ar<<endl;
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}