#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int ar[10000];
    int asum=0,bsum=0,csum=0;
    vector<int> aa;
    vector<int> bb;
    vector<int> cc;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        if(ar[i]==1){
            asum++;
            aa.push_back(i+1);
        }
        if(ar[i]==2){
            bsum++;
            bb.push_back(i+1);
        };
        if(ar[i]==3){
            csum++;
            cc.push_back(i+1);
        };
    }
    int w = min({asum,bsum,csum});
    cout<<w<<endl;
    for(int i=0;i<w;i++){
        cout<<aa[i]<<" "<<bb[i]<<" "<<cc[i]<<" "<<endl;
    }
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}