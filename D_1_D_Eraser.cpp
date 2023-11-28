#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    string s;
    cin>>s;
    int l = s.size();
    string s2="";
    vector<int> ar;
    int c = 0,m=0;
    for(int i=0;i<l;i++){
        if(s[i]=='B')ar.push_back(i+1);
    }
    for(int i=0;i<ar.size()-1;i++){
        if( k>= abs(ar[i]-ar[i+1]) ){
            c++;
            i+=2;
            //k-=abs(ar[i]-ar[i+1])-1;
        }
    }
    cout<<c<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}