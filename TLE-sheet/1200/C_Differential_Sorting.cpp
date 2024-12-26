#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a.push_back(x);
    }
    
    if(is_sorted(a.begin(),a.end())){
        cout<<0<<endl;
        return;
    }
    else if(a[n-1]<a[n-2] || a[n-1]<0){
        cout<<-1<<endl;
        return;
    }

    cout<<n-2<<endl;
    for(int i=0;i<n-2;i++){
        cout<<i+1<<" "<<n-1<<" "<<n<<endl;
    }
     

}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}