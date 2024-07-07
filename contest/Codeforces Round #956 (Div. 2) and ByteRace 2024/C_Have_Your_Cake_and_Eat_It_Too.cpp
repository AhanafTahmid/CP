#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n),b(n),c(n);
    vector<pair<int, array<int, 2>>> ans;
    bool ok1 = 0, ok2 = 0, ok3 = 0;
    int val = 0;
    for(int &i: a)cin>>i,val+=i;
    for(int &i: b)cin>>i;
    for(int &i: c)cin>>i;

    int asum = 0, bsum = 0, csum = 0;
    val = ceil((val*1.0) / 3);
    //cout<< val <<endl;
    int ct = 1;
    for(int i=0;i<n;i++){

        if(!ok1 && !ok2 && !ok3){
            asum+=a[i];
            bsum+=b[i];
            csum+=c[i];
        }

        if(!ok1 && !ok2 && ok3){
            asum+=a[i];
            bsum+=b[i];
        }
        else if(!ok1 && ok2 && !ok3){
            asum+=a[i];
            csum+=c[i];
        }
        else if(ok1 && !ok2 && !ok3){
            bsum+=b[i];
            csum+=c[i];
        }


        else if(ok1 && ok2 && !ok3){
            csum+=c[i];
        }
        else if(ok1 && !ok2 && ok3){
            bsum+=b[i];
        }
        else if(!ok1 && ok2 && ok3){
            asum+=a[i];
        }
        else if(ok1 && ok2 && ok3){
            break;
        }

        cout<< asum << ' ' << bsum << ' ' << csum <<endl;
        vector<int>tmp={asum, bsum, csum};
        sort(tmp.begin(),tmp.end());
        int lw = upper_bound(tmp.begin(),tmp.end(), val) - tmp.begin();
        
        if(lw==2){
            if(tmp[lw] == asum) ok1 = true, ans.push_back( {1, {ct, i+1}}); 
            else if(tmp[lw] == bsum) ok2 = true, ans.push_back({2, {ct, i+1}}); 
            else if(tmp[lw] == csum) ok3 = true, ans.push_back({3, {ct, i+1}}); 
            asum = 0, bsum = 0, csum = 0;
            ct = i + 2;
        }
        else if(lw==1){
            //ab, bc ,ac , remove optimal
            
            if(tmp[lw] == asum && tmp[lw-1] == bsum){
                ok1 = true, ans.push_back( {1, {ct, i+1}}); 
            }
            else if(tmp[lw] == bsum) ok2 = true, ans.push_back({2, {ct, i+1}}); 
            else if(tmp[lw] == csum) ok3 = true, ans.push_back({3, {ct, i+1}}); 
            asum = 0, bsum = 0, csum = 0;
            ct = i + 2;
        }
        if(lw==0){
            if(tmp[lw] == asum) ok1 = true, ans.push_back( {1, {ct, i+1}}); 
            else if(tmp[lw] == bsum) ok2 = true, ans.push_back({2, {ct, i+1}}); 
            else if(tmp[lw] == csum) ok3 = true, ans.push_back({3, {ct, i+1}}); 
            asum = 0, bsum = 0, csum = 0;
            ct = i + 2;
        }
    }

    // if(ans.size()<=2){
    //     cout<< -1 <<endl;
    //     return;
    // }
    sort(ans.begin(),ans.end());
    for(auto [x,y]: ans)cout<< y[0] << ' '<< y[1] <<' ';
    cout<<endl;

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}