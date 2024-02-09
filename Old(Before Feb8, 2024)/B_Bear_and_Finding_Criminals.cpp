#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    int ar[1000];
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }
    int f = 0;
    int c = 0;
    if(ar[k]==1) c++;

    int i = 1;
    while(1){
        //equally distributed
        if(k-i==0 && k+i==n+1){
            f = 2;
            break;
        }
        //left e kom
        if(k-i==0){
            f = 1;
            break;
        }
        //right e kom
        if(k+i==n+1){
            //cout<<k<<i<<endl;
            f = 11;
            break;
        }
        if(ar[k-i]==1 && ar[k+i]==1){
            c+=2;
            i++;
        }
        else if(ar[k-i]==1 && ar[k+i]==0){
            //cout<<k<<i<<t<<endl;
            i++;
            continue;
        }
        else if(ar[k-i]==0 && ar[k+i]==1){
            i++;
            continue;
        }
        else if(ar[k-i]==0 && ar[k+i]==0){
            i++;
            continue;
        }

    }

    if(f==2){
        cout<<c<<endl;
    }
    else if(f==1){
        for(int j=k+i;j<=n;j++){
            if(ar[j]==1) c++;
        }
        cout<<c<<endl;
    }
    else if(f==11){
        //cout<<k<<i<<endl;
        for(int j=k-i;j>=1;j--){
            if(ar[j]==1) c++;
        }
        cout<<c<<endl;
    }


}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}