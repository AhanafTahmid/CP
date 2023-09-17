#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n=2;
    cin>>n;
    int ar[10000];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int chs = n/2;
    //chs%2==0?chs=(n/2)+1:chs=n/2;
    int ar2[10000];
    

    int f = 0;
    int ct=0;

    
    //if(f) cout<<"n"<<endl;
    //else cout<<"y"<<endl;



   /*  for(int i=0;i<=chs;i++){
            ar[i]++;
        }
        for(int i=chs+1;i<n;i++){
            //cout<<ar[i];
            ar[i]--;
        }
        ct++;

        for(int i=0;i<n;i++){
            cout<<ar[i]<<" ";
        }

*/
    while(f==0){

        if(n==2){
            if(ar[0]==ar[1]){
                cout<<1<<endl;
                return;
            }
            else if(ar[0]!=ar[1]){
                cout<<0<<endl;
                return;
            }
        }

        copy(ar, ar+n, ar2);
        sort(ar2,ar2+n);
        //cout<<ar2[1]<<endl;
        
        //cout<<ar[0]<<ar[1];
        for(int i=0;i<n;i++){
            if(ar[i]!=ar2[i]){
                //answer
                f = 1;
                cout<<ct<<endl;
                return;
            }
        }


        for(int i=0;i<=chs;i++){
            ar[i]++;
        }
        for(int i=chs+1;i<n;i++){
            ar[i]--;
        }
        ct++;


        
    }
    
    





}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}