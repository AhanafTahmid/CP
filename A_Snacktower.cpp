#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> b(n);
    b = a;
    sort(b.begin(),b.end(),greater<int>());

    stack<int> st;
    int space = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(b[i]!=a[j]){
                space++;
            }
            else if(b[i]==a[j] && a[j]!=0){
                cout<<a[j]<<" ";
                a[j]=0;//visited
                //i++;
                break;
            }
        }
    }




}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}