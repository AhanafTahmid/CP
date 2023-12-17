#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    set<int> ar;
    int x; 
    for(int i=0;i<n;i++){
        cin>>x;
        //ar.push_back(x);
        ar.insert(x);
    }
    sort(ar,ar+n);
    int c1 = 0;
    for(int i=0;i<n-1;i++){
        if(ar[i]<ar[i+1]){
            c1++;
        }
    }

    int c2 = 0;
    sort(ar,ar+n,greater<int>());
    for(int i=0;i<n-1;i++){
        if(ar[i]>ar[i+1]){
            c2+;
        }
    }
    
    cout<<ar.size()-2<<endl;

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}