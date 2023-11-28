#include <bits/stdc++.h>
using namespace std;

void divisor(int x,int arr[]) 
{ 
    int cnt=0; 
    int mxcnt = 1;
    int mxnum = arr[0];
    map<int,int>m; 
    for(int i=0;i<x;i++) 
    { 
        cnt=0; 
        for(int j=1;j<=arr[i]/2;j++) 
        { 
            
            if(arr[i]%j==0) 
            { 
                cnt++; 
            } 
        } 
        
        if(mxcnt<=cnt){
            mxcnt = cnt;
            if(mxnum<arr[i])mxnum = arr[i];            
        }
    } 
    cout<<mxnum<<endl;
} 
int main() 
{ 
    int n,i; 
    cin>>n; 
    int arr[n+5]; 
    for(i=0;i<n;i++) 
        cin>>arr[i]; 
    divisor(n,arr); 
    return 0; 
}