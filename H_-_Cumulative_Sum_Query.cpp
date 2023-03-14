#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,s,i,j,a,b;
    
    cin>>n;
    vector<int> ar(n);
    for (i = 0; i <n; i++)
    {
        cin>>ar[i];
        ar.push_back(ar[i]);
    }
    int nn;
    cin>>nn;
    for(i=0;i<nn;i++){
        s=0;
        cin>>a>>b;
        //cout<<ar[i]<<" " << i <<endl;
        cout<<i<<" i"<<endl;
        for(j=a;j<b;j++){
            s+=ar[j];
            cout<<ar[j]<<" " << j <<endl;
        }
        
        //cout<<s<<endl;
    }
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}