#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    set<int> a;
    //set<int>::iterator itr;
    int x,y;
    int l = 0;
    for(int i=0;i<n;i++){
       cin>>x>>y;
       if(x==1) a.insert(y);
       else if(x==2) a.erase(y);
       else if(x==3){
            if(a.find(y)!=a.end()){
                cout<<"Yes"<<endl;
            }
            else cout<<"No"<<endl;
        };
    }
}



int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}