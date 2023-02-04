//
#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long int x;
   cin>>x;
   int i=1;
   while(pow(2,i)<=x){
        if(pow(2,3)==x){
            printf("YES");
            return;
        }
        i++;
   }
   printf("NO");
   
    //cout<< pow(2,3);
    //for(int i=0;i<)
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}