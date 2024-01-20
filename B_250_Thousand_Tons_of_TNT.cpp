#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;
    vector<ll> ar(n);
    for(ll i=0;i<n;i++){
        cin>>ar[i];
    }


    //get divisors(log n)
    vector<ll> dv;
    for(ll i = 1; i <= sqrt(n); i++)
		if(n % i == 0){
            dv.push_back(i);
			///cout << i << " ";
			if(i != n/i && n/i!=n) dv.push_back(n/i);
	}


    long long mn = 0, mx = 0,ans = LONG_MIN;
    vector<ll> ar2;
    for(auto x: dv){
        ar2.clear();
        for(ll i=0;i<n;i+=x){
            long long s1 = accumulate(ar.begin()+i,ar.begin()+x+i,0LL);
            ar2.push_back(s1);
        }
        mx = *max_element(ar2.begin(),ar2.end());
        mn = *min_element(ar2.begin(),ar2.end());

        ans = max(mx-mn,ans);
        
    }

    cout<<ans<<endl;

}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}