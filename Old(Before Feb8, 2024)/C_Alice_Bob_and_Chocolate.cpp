#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int ar[n+1];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int a = 0, b = 0;
    int cur = 0;
    int i = 0, j = n-1;
    int f = 0;
    while(1){
        if(i>=n || j<0)break;


        if(ar[i]<=ar[j] && !f){
            a++;
            cur = ar[j]-ar[i];
            i++;
            f = 1;
        }


        if(cur<=ar[j]){
            a++;
            cur = ar[j]-ar[i];
            i++;
        }
        else if(ar[i]>ar[j]){
            b++;
            cur = ar[i]-ar[j];
            j--;
        }
        else if(cur<ar[i]){
            b++;
            cur = ar[i]-ar[j];
            j--;
        }
        else if(cur<ar[j]){
            a++;
            cur = ar[j]-ar[i];
            i++;
        }



        
    }
    cout<<a<<b<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}