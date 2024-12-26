#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    char s;
    int x;
    long long sum=k;
    int d = 0;
    for(int i=0;i<n;i++){
        cin>>s>>x;
        //cout<<s<<" "<<x<<endl;
        if(s=='+'){
            sum+=x;
        }
        else if(s=='-'){
            if((sum-x)>=0){
                sum-=x;
            }
            else d++;
        }
    }
    cout<<sum<<" "<<d<<endl;

    

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}