#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> ar;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ar.push_back(x);
    }
    int nn;
    cin>>nn;
    //sort(ar.begin(),ar.end());
    for(int i=0;i<nn;i++){
        int y;
        cin>>y;      
        auto f = lower_bound(ar.begin(),ar.end(),y);
        //int pos = f-ar.begin()+1;
        //cout<<pos<<endl;
        //auto rr = find(ar.begin(),ar.end(),y);
        if(ar[f - ar.begin()] != y){
            cout<<"No "<<f-ar.begin()+1<<endl;
            
        }
        else cout<<"Yes "<<f-ar.begin()+1<<endl;
        
        //if()
        //cout<<low1-ar.begin()<<endl;
        //cout<<lower_bound(ar.begin(),ar.end(),y);
    }
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}