#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> ar(n);
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        mp[ar[i]]++;
    }
    if(mp.size()>=3){
        cout<<"No"<<endl;
    }
    else{
        if(abs(mp.begin()->second - mp.rbegin()->second)<=1){
            //cout<<mp.begin()->second<<" "<<mp.rbegin()->second<<endl;
            cout<<"Yes "<<endl;
        }
        else cout<<"No"<<endl;
    }
    

    
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}