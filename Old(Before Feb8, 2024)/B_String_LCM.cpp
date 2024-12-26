#include <bits/stdc++.h>
using namespace std;
void solve(){
    string a,b;
    cin>>a>>b;
    if(b>a){
        swap(b,a);
    }
    string x = a;
    string y = b;
    //cout<<a<<" "<<b<<endl;
    int la = a.size();
    int lb = b.size();
    int lcm = (la * lb) / gcd(la, lb);


    for(int i=la;i<lcm;i+=la){
        a+=x;
    }
    for(int i=lb;i<lcm;i+=lb){
        b+=y;
    }
    a!=b?cout<<-1<<endl:cout<<a<<endl;
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}