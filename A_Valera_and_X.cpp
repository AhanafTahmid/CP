#include <bits/stdc++.h>
using namespace std;
char c[1000][1000];
void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>c[i][j];
        }
    }
    set<char>m;
    set<char>o;
    

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
            if(i==j || i+j==n-1){
                m.insert(c[i][j]);
            }
            else o.insert(c[i][j]);
        }
    }

    if(m.size()>1 || o.size()>1) cout<<"NO"<<endl;
    else if(*m.begin()==*o.begin()) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}