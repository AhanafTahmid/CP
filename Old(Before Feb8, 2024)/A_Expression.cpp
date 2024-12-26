#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int s1,s2,s3,s4,s5,s6;
    s1 = (a+b)*c;
    s2 = (a*b)+c;
    s3 = a*b*c;
    s4 = a+b+c;
    s5 = a*(b+c);
    s6 = a+(b*c);
    vector<int> ar;
    ar.push_back(s1);
    ar.push_back(s2);
    ar.push_back(s3);
    ar.push_back(s4);
    ar.push_back(s5);
    ar.push_back(s6);
    sort(ar.begin(),ar.end());
    cout<<ar[5]<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}






