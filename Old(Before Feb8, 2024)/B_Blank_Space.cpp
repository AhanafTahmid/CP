#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int ar[10000];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    vector<int> a(n);

    int c=0;
    for(int i=0;i<n;i++){
        if(ar[i]==0){
            c++;
            if(i==n-1){
                a.push_back(c);
            }
        }
        else if(ar[i]!=0){
            a.push_back(c);//0,2,0,1
            c = 0;
        }
    }
    sort(a.begin(),a.end(),greater<int>());
    cout<<a[0]<<endl;

}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}