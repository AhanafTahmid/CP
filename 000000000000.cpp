#include <bits/stdc++.h>
using namespace std;
void solve(){
    int ar[100]={1,2,4,55,33,57,2,1};
    int n = 8;
    int min = -1;
    for(int i=0;i<n;i++){
        min = -1;
        for(int j=i;j<n;j++){
            //cout<<5<<endl;
            if(ar[j]<min){
                min = ar[j];
               cout<<min<<endl;
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