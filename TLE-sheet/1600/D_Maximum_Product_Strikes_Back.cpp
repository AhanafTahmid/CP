#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    int z = count(a.begin(),a.end(), 0);
    if( z == n || (n==1 && a[0]<=0)){
        cout<< 0 << ' ' << n << endl;
        return;
    }

    int l = 0, r = 0, val = 0, mxval = 0;
    while(l<=r && a[l]==0) l++;

    for(int i=l;i<n;){
        int j = i;
        //move till 0
        while(j<n && abs(a[j])>0)j++;

        //muliply the current length
        //cout<< i << ' ' << j <<endl;
        val=0;
        int l2 = i, r2 = j, newl, newr;
        int neg = 0;
        while(l2<r2){
            if( a[l2] < 0 ) neg++;
            val+= ( 2 == abs(a[l2]));
            l2++;
        }
        l2 = i;
        //check multiplication of the current length negative or positive
        if( neg%2 == 0 ){
            newl = i;
            newr = j;
        }
        else{
            //jedike kom 2 sacrifice remove that one only
            while(l2<j){
                if( a[l2] < 0) break;
                l2++;
            }
            r2--;
            while(i<=r2){
                if( a[r2] < 0) break;
                r2--;
            }
            int v1 = 0, v2 = 0, l3 = l2 + 1, r3 = r2;
            l2++;
            //cout<< l2 << j <<endl;
            while(l2<j){
                v1+=(2==abs(a[l2]));
                l2++;
            }
            r2--;
            while(i<=r2){
                v2+= (2==abs(a[r2]));
                r2--;
            }
 
            //cout<< v1 << " -=-=-=- " << v2 <<endl;
            val = max(v1, v2);
            if( max(v1, v2) == v1) newl = l3, newr = j;
            else newl = i, newr = r3;
            
        }
        //update length if max value found
        if( val>=mxval ){
            mxval = val;
            l = newl;
            r = newr;
        }
        i = j+1;    
    }

    cout<< l << ' ' <<  n - r <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}