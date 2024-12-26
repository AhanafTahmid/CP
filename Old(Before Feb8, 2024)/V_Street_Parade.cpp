#include <bits/stdc++.h>
using namespace std;
void solve(){
    
    while(1){
        int n;
        cin>>n;
        vector<int> vc;
        if(n==0) break;
        else{
            for(int i=0;i<n;i++){
                int x;
                cin>>x;
                vc.push_back(x);
            }
            sort(vc.begin(),vc.end(),greater<int>());
            for(int i=0;i<n-1;i++){
                if(vc[i]-vc[i+1]!=1){
                    cout<<"no"<<endl;
                    return;
                }
            }
            cout<<"yes"<<endl;
            //return;
        }
    }
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}