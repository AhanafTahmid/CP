#include <bits/stdc++.h>
using namespace std;

void solve(){
        long long n;
        cin>>n;
        //long long n = 4204474560;

        vector<long long > ar;
    	for(int i = 1; i*i <= n; i++){
		    if(n % i == 0){
			//cout << i << " ";
                ar.push_back(i);
			    if(i != n/i) ar.push_back(n/i);
		    }
            if(i>=1e3)
			    break;
		    //if(ar.size()>=1e3)
			    //break;
        }
        sort(ar.begin(),ar.end());

        int c =1;
        //vector<int> ct;
        int ans = 0;
	    for(int i=0;i<ar.size()-1;i++){
            //cout<<55<<endl;
            //cout<<ar[i]<<endl;
            if(ar[i]+1==ar[i+1]){
                c++;
               // ct.push_back(c);
            }
            else{
                ans = max(ans,c);
                c = 1;
                
            }
        }
        //int mx = *max_element(ct.begin(),ct.end());
       ans = max(ans,c);
        
        cout<<ans<<endl;
}



int main(){

    int t=1;
    cin >> t;
    while(t--) solve();

        
    return 0;
}