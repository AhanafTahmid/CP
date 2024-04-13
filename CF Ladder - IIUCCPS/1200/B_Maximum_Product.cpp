#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> pos;
    vector<int> neg;
    int ans = 1;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        x<0? neg.push_back(x) : pos.push_back(x);
    }

    sort(pos.rbegin(),pos.rend());
    sort(neg.begin(),neg.end());
    int i = 0, j = 0;

    if(n==5){
        for(int x: pos) ans*=x;
        for(int x: neg) ans*=x;
        cout<< ans <<endl;
    }
    //all pos
    else if(neg.size()==1 || neg.size()==0){
        
        for(int x: pos) ans*=x;
        cout<< ans <<endl;
    }
    //all neg
    else if(pos.size()==0){
        ans = 1;
        for(int i=0;i<5;i++){
            ans *= neg[i];
        }
        cout<< ans <<endl;
    }
    else if(neg.size()==2){
        if(neg[0]*neg[1]>=pos[0]*pos[1]){
            ans*=neg[0]*neg[1];
            ans*=pos[0]*pos[1];
            ans*=pos[2];
            cout<< ans <<endl;
        }
        else{
            ans*=pos[0]*pos[1];
            if(neg[0]*neg[1]>=pos[2]*pos[3]){
                ans*=neg[0]*neg[1];
                ans*=pos[2];
                cout<< ans <<endl;
            }
            else{
                ans*=pos[0]*pos[1];
                ans*=pos[2];
                cout<< ans <<endl;
            }
        }
    } 
    // 3 neg 3 pos -> 
    // 1 1 2 
    //-1 -2 -1
    else if(neg.size()==3){
        if(pos.size()>=2 && neg[0]*neg[1]<pos[0]*pos[1]){
            ans *= pos[0]*pos[1];
            ans *= neg[0]*neg[1];
        }

    }
    else if(neg.size()==4){
        if(pos.size()>=2 && neg[0]*neg[1]<pos[0]*pos[1]){
            
        }
    }

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}