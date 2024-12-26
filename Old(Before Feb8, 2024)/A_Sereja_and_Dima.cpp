#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,s=0,d=0;
    cin>>n; 
    vector<int> ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int k = 0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(ar[k]<=ar[ar.size()-1]){
                s+=ar[ar.size()-1];
                //cout<<"1 "<<ar[ar.size()-1]<<endl;
                ar.pop_back();
                
            }
            else{
                //cout<<"2 "<<ar[0+k]<<endl;
                s+=ar[k];
                k++;
            }
        }
        else if(i%2==1){
            if(ar[k]<=ar[ar.size()-1]){
                //cout<<"3 "<<ar[ar.size()-1]<<endl;

                d+=ar[ar.size()-1];
                ar.pop_back();
            }
            else{
                //cout<<"4 "<<ar[0+k]<<endl;
                d+=ar[k];
                k++;
            }
        }

    }
    cout<<s<<" "<<d<<endl;

}


int main(){

    int t=1;
   // cin >> t;
    while(t--)solve(); 
    return 0;
}