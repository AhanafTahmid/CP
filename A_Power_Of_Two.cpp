//
#include <bits/stdc++.h>
using namespace std;
void solve(){
   long long int x,a1;
   cin>>x;
   double r = log2(x) / log2(2);
   if(r-(int)r==0) cout<< "YES";
   else cout<<"NO";
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}