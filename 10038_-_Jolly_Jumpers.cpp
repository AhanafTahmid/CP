#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, ar[10001], i, f;
	while(scanf("%d", &n) == 1) {
		for(i = 0; i < n; i++){
            cin>>ar[i];
        }
        int aa[10000] = {};
		for(i = 1; i < n; i++) {
			if(abs(ar[i] - ar[i-1]) < n){
                aa[abs(ar[i] - ar[i-1])]++;
            }
				
		}
        f = 0;
		for(i = 1; i < n; i++){
            if(aa[i] == 0) f = 1;
        }
		if(f==1) cout<<"Not jolly"<<endl;
		else cout<<"Jolly"<<endl;
	}
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}