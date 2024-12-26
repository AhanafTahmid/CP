#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    ll mini;
    ll maxi;
    for(int i=0;i<n;i++){
        mini = 10000000000;
        maxi = -10000000000;

        //first element
        if(i==0){
            mini = abs(ar[0]-ar[1]);
            maxi = abs(ar[0]-ar[n-1]);
        }
        //last element
        else if(i==(n-1)){
            mini = abs(ar[i]-ar[i-1]);
            maxi = abs(ar[i]-ar[0]);
        }
        //anything in the middle
        else{
            mini = min(abs(ar[i]-ar[i-1]),abs(ar[i]-ar[i+1]));
            maxi = max(abs(ar[i]-ar[0]),abs(ar[i]-ar[n-1]));
        }
        cout<<mini<<" "<<maxi<<endl;
    }

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}