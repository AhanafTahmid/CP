//we'll only have to care about negative values
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;
    cin>>n;
    vector<int> a;
    vector<int> neg;
    int neg_ct = 0, zero_ct = 0, pos_sum = 0, neg_sum = 0, pos_ct = 0, other_neg_sum = 0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x==1)continue;
        else if(x==0)zero_ct++;
        else if(x<0)neg_ct++, neg.push_back(x), neg_sum+=(abs(x)-1), other_neg_sum+=abs(x-1);
        else if(x>0)pos_sum+=(x-1), pos_ct++;
        a.push_back(x);
    }
    if(!neg_ct && !zero_ct)cout<< pos_sum <<endl;//all pos
    else if(!neg_ct && !pos_ct)cout<< zero_ct <<endl;//all zero
    // only negative even times
    else if(neg_ct%2==0)cout<< pos_sum + neg_sum + zero_ct << endl;
    // negative odd times
    else if(neg_ct%2==1){
        if(!zero_ct) cout<< pos_sum + other_neg_sum - (neg_ct-1)*2 <<endl;
        else if(zero_ct%2==0 && (neg_ct+zero_ct)%2==0) cout<< pos_sum + zero_ct + neg_sum <<endl;
        else cout<< pos_sum + neg_sum + zero_ct <<endl;
    }
    
}


signed main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}