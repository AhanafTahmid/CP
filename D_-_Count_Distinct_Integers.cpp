#include <bits/stdc++.h>
using namespace std;
#define LOOP(i,n) for(int i=0;i<n;i++)
void solve(){
    int n,tt,c=0,i,j;
    cin>>n;
    vector<int> ar;
    for(i=0;i<n;i++){
        cin>>tt;
        ar.push_back(tt);
    }
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            //if(ar[i]!=ar[j]){
                cout<< c++ << " "<< ar[i] <<" "<< ar[j]<< " "<<endl;
           // }
        }
    }
    cout<<c<<endl;

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}