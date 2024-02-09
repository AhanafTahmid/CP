#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c,d,s=0;
    cin>>a>>b>>c>>d;
    int ar[100]={a,b,c,d};
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(ar[i]==ar[j] && ar[j]!=-1){
                s++;
                ar[j]=-1;
            }
        }
    }
    
    cout<<s<<endl;


}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}