#include <bits/stdc++.h>
using namespace std;
void solve(){
    int ar[]={11,22,30,33,40,44,55,60,66,77,80,88,99};
    //find 40
    int x = 43;
    int l = 0;
    int r = (sizeof(ar)/sizeof(ar[0]))-1;
    int mid;
    int f=0;
    while(l<=r){
        mid = (l+r)/2;
        if(ar[mid]==x){
            f = 1;
            cout<<"found"<<x<<"at"<<mid+1<<endl;
            break;
        }
        else if(ar[mid]>x){
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    if(!f)cout<<"not found"<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}