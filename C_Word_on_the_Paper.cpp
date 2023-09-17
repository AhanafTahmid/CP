#include <bits/stdc++.h>
using namespace std;
void solve(){
    char ar[100][100];
    string w;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> ar[i][j];
            if(ar[i][j]!='.'){
                w+=ar[i][j];
            }
        }
    }
    cout<<w<<endl;
    
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}