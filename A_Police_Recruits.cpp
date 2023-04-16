#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,c=0,r=0;
    cin>>n;
    vector<int> ar(n+2);
    for(int i=0;i<n;i++){
        cin>>ar[i];
        ar.push_back(ar[i]);
    }
    int j=0;
    for(int i=0;i<n;i++){
        if(ar[i]>0){
            j = i;
            break;
        }
        else if(ar[i]==-1) c++; 
    }
    
    int last_index=n;
    for(int i=j;i<n;i++){
        if(ar[i]>0) {
            //r+=ar[i];
            //cout<<ar[i]<<endl;
        }
        else{
            last_index = i;
            //cout<<ar[i]<<endl;
            //cout<<"ll"<<r<<endl;
        }
    }


    for(int i=j;i<last_index;i++){
        if(ar[i]>0) {
            r+=ar[i];
            //cout<<ar[i]<<endl;
        }
        else{
            r--;
            //last_index = i;
            //cout<<ar[i]<<endl;
            //cout<<"ll"<<r<<endl;
        }
    }

    if(r<0){
        r = -r;
    }
    else{
        //cout<<"ddddd"<<endl;
        r = 0;
    }

    cout<<c+r<<endl;
    


}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}