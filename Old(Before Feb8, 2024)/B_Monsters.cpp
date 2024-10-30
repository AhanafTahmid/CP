#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> ar(n);
    vector<int> ar2;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        ar[0]
        mp.insert(ar[i],i);
    }

    int ct=0;
    while(ct!=3){
        int mx = *max_element(ar.begin(),ar.end())-k;
        //ar[i]=mx;
        //cout<<mx;
        //mp[i]-2
        if(mx<0){
            ct++;
           // ar2.push_back(index);
            //ar.erase(ar.begin()+index,);
            //cout<<mx;
        }
        ct++;

    }
    //print the ar2 vector
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}