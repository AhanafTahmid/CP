#include <bits/stdc++.h>
using namespace std;



int main(){

    int t=1;
    cin >> t;
    for(int i=1;i<=t;i++){
        for(int j=1;j<=i;j+=2){
            cout<<'*';
        }
        cout<<endl;
    }
        
    return 0;
}