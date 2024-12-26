#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int ar[100][100]={};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%1d",&ar[j][i]);
        }
    }

    int c = 0, total = 0,f =0;
    for(int i=0;i<n;i++){
        //c = 0;
        for(int j=0;j<n;j++){
            cout<<ar[i][j];
            if(ar[j][i]==1 && ar[j][i+1]==1){
                c++;
                //cout<<ar[j][i]<<"jjjj";
                cout<<"iii";
                cout<<j<<i<<endl;
            }
            
        }
        cout<<endl;
    }
    cout<<c<<endl;

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}