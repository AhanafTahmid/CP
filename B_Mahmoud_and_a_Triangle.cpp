#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }

    sort(a.begin(),a.end());
 
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n-1;j++){
            //cout<<a[i]<<" "<<a[j]<<" "<<a[j+1]<<endl;
            if((a[i]+a[j])>a[j+1] &&  (a[i]+a[j+1])>a[j] && (a[j+1]+a[j])>a[i]){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}