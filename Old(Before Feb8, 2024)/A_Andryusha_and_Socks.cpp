#include <bits/stdc++.h>
using namespace std;
void solve(){
    //do with set later
    int n;
    cin>>n;
    vector<int>ar(n);
    vector<int>cd(n,0);
    int c = 1;
    for(int i=0;i<n*2;i++){
        cin>>ar[i];
        //erase all vector
        for(int j=0;j<=i;j++){
            if(ar[i]!=ar[j]){
                c++;
                cout<<c<<" "<<ar[i]<<ar[j]<<" ";
            }
            else{
                cout<<endl;
                cd.push_back(c);
                c = 1;
            }
        }
    }
    for(int k=1;k<cd.size();k++){
        //cout<<cd[k];
    }

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}