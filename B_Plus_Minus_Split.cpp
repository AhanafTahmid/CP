#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    char ch;
    int p = 0, m = 0;
    for(int i=0;i<n;i++){
        cin>>ch;
        if(ch=='+')p++;
        else m++;
    }
    cout<<abs(p-m)<<endl;

}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}