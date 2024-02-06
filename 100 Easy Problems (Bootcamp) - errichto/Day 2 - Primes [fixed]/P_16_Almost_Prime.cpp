#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int pr[100000]={};

int isPrime(int n){
        for(int j=2;j*j<=n;j++){
            if(pr[j]==0){
                for(int k=j*j;k<=n;k+=j){
                    pr[k] = true;
                }
            }
        }
    return pr[n];
}

//ans should be pass by reference obviously
void get_divisors(int n, int &ans){
    int ct = 0; 

    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            if(!isPrime(i)) ct++;
            if(n/i!=i)if(!isPrime(n/i)) ct++;
        }
    }

    if(ct==2) ans++;
    //cout<< n<<" = "<< ans <<endl;

}

void solve(){
    int n;
    cin>>n;
    int ans = 0;
    for(int i=2;i<=n;i++)get_divisors(i, ans);

    cout<< ans <<endl;

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}