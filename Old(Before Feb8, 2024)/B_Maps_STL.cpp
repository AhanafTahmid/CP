#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    map<string,int>ar;
    for(int i=0;i<n;i++){
        int nn;
        cin>>nn;
        string str;
        int num;
        
        if(nn==1){
            cin>>str;
            cin>>num;
            //ar.insert({str,num});
            ar[str]+=num;
        }
        else if(nn==2){
            cin>>str;
            ar.erase(str);
        }
        else if(nn==3){
            cin>>str;
            auto ii = ar.find(str);
            if(ii!=ar.end()) cout<<ii->second<<endl;
            else cout<<0<<endl;
            //cout<<ar.
        }

    }
}


int main(){

    int t=1;
   // cin >> t;
    while(t--)solve(); 
    return 0;
}