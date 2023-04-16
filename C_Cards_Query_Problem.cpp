#include <bits/stdc++.h>
using namespace std;
void solve(){
    int k;
    vector<int> card,box;
    cin>>k;
    if(k==1){
        int a,b;
        cin>>a>>b;
        card[a].push_back(b);
        box[b].push_back(a);
    }
}


int main(){

    int t=1,q;
    cin >> q >>t;
    while(t--)solve(); 
    return 0;
}