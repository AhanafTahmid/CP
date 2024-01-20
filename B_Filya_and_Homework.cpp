#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    set<int> a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.insert(x);
    }
    vector<int> ar(a.begin(), a.end());
    sort(ar.begin(),ar.end());
    int x1 = ar[2] == (ar[1] + (ar[1]-ar[0]));//for 3rd element
    if(a.size()>3)cout<<"NO"<<endl;
    else if(a.size()<=2)cout<<"YES"<<endl;
    else if(a.size()==3 && x1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl; 
}

int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}