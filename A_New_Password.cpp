#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,d;
    cin>>n>>d;
    string str = "abcdefghijklmnopqrstuvwxyz";
    string str2[100000];
    for(int i=0;i<d;i++){
        str2[i] = str[i];
        //str.push_back(str[i]);
    }
    for(int i=d-1;i<n;i++){
        str2[i] = str[i];
        //str.push_back('z');
    }
    for(int i=0;i<n-2;i++){
        if(str[i]==str2[i+1]){
           str[i+1]=str2[i+2];
        }
        cout<<str[i]<<endl;
    }



}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}