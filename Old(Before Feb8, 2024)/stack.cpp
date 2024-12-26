#include <bits/stdc++.h>
using namespace std;
void solve(){
    stack<int> a;
    int b=10;
    a.push(b);
    a.push(5);
    a.push(b+11);
    a.push(2);
    while(!a.empty()){
        cout<<a.top()<<endl;
        a.pop();
    }
    
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}