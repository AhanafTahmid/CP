#include<bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    int n,q,i,left,right,middle,f=0; 
    cin>>n>>q; 
    int arr[n+5]; 
    for(i=0;i<n;i++) 
        cin>>arr[i]; 
    sort(arr,arr+n); 
    while(q--) 
    { 
        int x; 
        cin>>x; 
        left=0; 
        right=n-1; 
        f = 0;
        while(left<=right) 
        { 
           middle=(left+right)/2; 
           if(x==arr[middle]) 
           { 
             f=1; 
             break; 
           } 
           else if(x<arr[middle]) 
             right=middle-1; 
           else 
             left=middle+1; 
        } 
        if(f==1) 
         cout<<"found"<<endl; 
        else 
            cout<<"not"<<" "<<"found"<<endl; 
    } 
    return 0; 
}