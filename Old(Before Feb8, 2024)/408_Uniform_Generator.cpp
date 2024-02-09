#include <bits/stdc++.h>
using namespace std;
void solve(){
    int step, mod, val = 0;
    int f = 1;
    while(cin>>step>>mod ){
        f = 1;
        val = mod - step;
        vector<int> ar;
        for(int i=0;i<mod;i++){
            val = (val + step)% mod;
            ar.push_back(val);
        }
        sort(ar.begin(),ar.end());

        for(int i=0;i<mod;i++){
            if(ar[i]!=i){
                f = 0;
            }
        }
        if(f){
            cout << setw(10)<< step << setw(10)<< mod << "    Good Choice\n\n";
            //printf("%10d%10d%4s%s\n\n",step,mod,"","Good Choice");
        }
        else{
            printf("%10d%10d%4s%s\n\n",step,mod,"","Bad Choice");
        }
    }


}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}