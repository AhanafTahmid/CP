#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,a,x,y;
    cin>>n;
    vector<int> li;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        li.push_back(val);
    }
    cin>>a;
    cin>>x>>y;
    li.erase(li.begin()+a-1);
    li.erase(li.begin()+x-1,li.begin()+y-1);
    cout<<li.size()<<endl;
    for(int i=0;i<li.size();i++){
        cout<<li[i]<<" ";
    }
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}