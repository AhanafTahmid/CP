#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

struct p{
    int marks,index;
};

// bool cmp(const p &a,const p &b){
//     return a.marks>b.marks;
// }

void solve(){
    int n;
    cin>>n;
    vector<p>all;
    int j_marks = 0;
    int f = 0;
    for(int i=0;i<n;i++){
        int a,b,c,d;
        cin>> a >> b >> c >> d;
        all.push_back({a+b+c+d,i+1});
        if(!f)j_marks = a+b+c+d, f=1;
    }

    sort(all.begin(),all.end(),[](p a, p b){ return a.marks>b.marks;});
    int ans = 1;
    for(auto [x,y]: all){
        if(x==j_marks){
            cout<< ans <<endl;
            return;
        }
        ans++;
    }
    //cout<< j_marks <<endl;
}


signed main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}