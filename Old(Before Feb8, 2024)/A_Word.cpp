#include <bits/stdc++.h>
using namespace std;
void solve(){
    string a;
    int sm=0,cp=0;
    cin>>a;
    for(int i=0;i<a.size();i++){
        if(a[i]>=97 && a[i]<=122) sm++;
        else cp++;
    }
    if(cp<=sm){
        for(int i=0;i<a.size();i++){
            if(a[i]>=65 && a[i]<=90) a[i]+=32;
        }
        cout<<a<<endl;
    }
    else{
        for(int i=0;i<a.size();i++){
            if(a[i]>=97 && a[i]<=122) a[i]-=32;
        }
        cout<<a<<endl;
    }

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}