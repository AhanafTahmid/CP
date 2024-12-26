#include <bits/stdc++.h>
using namespace std;
void solve(){
    string n;
    //cout<<"num = ";
    cin>>n;
    int h,l;
    cout<<n;
    for(int i=0;i<n.size();i++){
        if(n[i]==1 || n[i]==2 || n[i]==3 || n[i]==4 ||n[i]==5 || n[i]==6 || n[i]==7 || n[i]==8 || n[i]==0) n[i]=9;
    }
    //Find small
    for(int i=0;i<n.size();i++){
        if(n[i]==1 || n[i]==2 || n[i]==3 || n[i]==4 ||n[i]==5 || n[i]==6 || n[i]==7 || n[i]==8 || n[i]==0) n[i]=;
    }

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}