#include <bits/stdc++.h>
using namespace std;
void solve(){
    int c=0,j=0;
    string a,b;
    cin>>a>>b;
    for(int i=0;i<b.size();i++){
        if(b[i]==a[j]){
            j++;
            c++;
        }
    }
    cout<<c+1<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}