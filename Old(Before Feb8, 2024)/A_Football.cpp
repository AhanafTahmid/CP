#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<string> ar;
    string x;
    for(int i=0;i<n;i++){
        cin>>x;
        ar.push_back(x);
    }
    string s1 = ar[0];
    string s2 = "";
    int c = 0;
    for(int i=0;i<n;i++){
        if(s1==ar[i])c++;
        else s2 = ar[i];
    }
    //cout<<c<<endl;
    int mx = max(c,n-c);
    
    mx==c?cout<<s1<<endl:cout<<s2<<endl;
    
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}