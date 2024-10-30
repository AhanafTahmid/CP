#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n),b(n),c(n);
    int val = 0;
    for(int &i: a)cin>>i,val+=i;
    for(int &i: b)cin>>i;
    for(int &i: c)cin>>i;

    val = (val+2) / 3;
    int asum = 0, bsum = 0, csum = 0;
    auto get = [&](vector<int>a,vector<int>b, vector<int>c){
        vector< array<int, 2> >ans;
        int s = 0, st = 1;
        for(int i=0;i<n;i++){
            s+=a[i];
            if(s>=val){
                ans.push_back({st,i+1});
                st = i + 1;
                break;
            }
        }
        s = 0;
        for(int i=st;i<n;i++){
            s+=b[i];
            if(s>=val){
                ans.push_back({st+1,i+1});
                st = i+1;
                break;
            }
        }
        s = 0;
        for(int i=st;i<n;i++){
            s+=c[i];
            if(s>=val){
                ans.push_back({st+1,n});
                break;
            }
        }
        return ans;
    };

    //6 combinations
    if(get(a,b,c).size() == 3){
        vector<array<int, 2>>p = get(a,b,c);
        int a0 = p[0][0], a1 = p[0][1];
        int b0 = p[1][0], b1 = p[1][1];
        int c0 = p[2][0], c1 = p[2][1];
        cout<<a0<<' '<<a1<<' '<<b0<<' '<<b1<<' '<<c0<<' '<<c1<<endl;
    }
    else if(get(a,c,b).size() == 3){
        vector<array<int, 2>>p = get(a,c,b);
        int a0 = p[0][0], a1 = p[0][1];
        int b0 = p[2][0], b1 = p[2][1];
        int c0 = p[1][0], c1 = p[1][1];
        cout<<a0<<' '<<a1<<' '<<b0<<' '<<b1<<' '<<c0<<' '<<c1<<endl;
        
    }
    else if(get(b,a,c).size() == 3){
        vector<array<int, 2>>p = get(b,a,c);
        int a0 = p[1][0], a1 = p[1][1];
        int b0 = p[0][0], b1 = p[0][1];
        int c0 = p[2][0], c1 = p[2][1];
        cout<<a0<<' '<<a1<<' '<<b0<<' '<<b1<<' '<<c0<<' '<<c1<<endl;
    }
    else if(get(b,c,a).size() == 3){
        vector<array<int, 2>>p = get(b,c,a);
        int a0 = p[2][0], a1 = p[2][1];
        int b0 = p[0][0], b1 = p[0][1];
        int c0 = p[1][0], c1 = p[1][1];
        cout<<a0<<' '<<a1<<' '<<b0<<' '<<b1<<' '<<c0<<' '<<c1<<endl;
    }
    else if(get(c,a,b).size() == 3){
        vector<array<int, 2>>p = get(c,a,b);
        int a0 = p[1][0], a1 = p[1][1];
        int b0 = p[2][0], b1 = p[2][1];
        int c0 = p[0][0], c1 = p[0][1];
        cout<<a0<<' '<<a1<<' '<<b0<<' '<<b1<<' '<<c0<<' '<<c1<<endl;
    }
    else if(get(c,b,a).size() == 3){
        vector<array<int, 2>>p = get(c,b,a);
        int a0 = p[2][0], a1 = p[2][1];
        int b0 = p[1][0], b1 = p[1][1];
        int c0 = p[0][0], c1 = p[0][1];
        cout<<a0<<' '<<a1<<' '<<b0<<' '<<b1<<' '<<c0<<' '<<c1<<endl;
    }
    else cout<< -1 <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}