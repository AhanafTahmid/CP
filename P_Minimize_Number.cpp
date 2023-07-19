#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[100000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int c = 0;
    int i = 0;
    while(1){
        //i++;
        if(arr[i]%2==1){
            break;
        }
        else if(arr[i]%2==0){
            arr[i]/=2;
            i++;
        }

        if(i==n-1){
            c++;
            i=0;
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