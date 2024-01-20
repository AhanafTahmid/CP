#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n),b(n),t(n);
    for(int i=0;i<n;i++){
       cin>>a[i];
    }
    b = a;
    t = a;
    sort(b.begin(),b.end());

    
    if(t==b){
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
        return;
    }
    int idx1 = -1 , idx2 = 0;
    for(int i=0;i<n;i++){
        if(b[i]!=t[i]){
            if(idx1==-1) idx1 = i + 1;
            idx2 = i+1;
        }
        
    }
    reverse(t.begin()+idx1-1,t.begin()+idx2);
    //sort(t.begin()+idx1-1,t.begin()+idx2);
    //for(auto x: t)cout<<x<<" ";
    //cout<<idx1<<" "<<idx2<<endl;
    if(t==b){
        cout<<"yes"<<endl;
        cout<<idx1<<" "<<idx2<<endl;
    }
    else cout<<"no"<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}