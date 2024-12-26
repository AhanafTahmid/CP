#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string a;
    cin>>a;
    //int l = a.size();
    int tt =1;
    int len=0;
    for(int i=0;i<n-1;i++){
        int c=0;
        for(int j=0;j<n-1-len;j++){
            //cout<<a[j]<<a[j+tt]<<" ";
            //cout<<a[j]<<a[j+1]<<" ";
            //c++;
            if(a[j]==a[j+tt]){
                //cout<<c<<endl;
                break;
                //c++;
            }
            c++;
        }
        cout<<c<<endl;
        //cout<<endl;
        tt++;
        len++;
    }
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}