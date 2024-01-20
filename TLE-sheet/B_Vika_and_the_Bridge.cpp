#include <bits/stdc++.h>
using namespace std;

void solve(){
    int p,c;
    cin>>p>>c;//p = planks, c = number of colors
    vector<int> pl;
    for(int i=0;i<p;i++){
        int x;
        cin>>x;
        pl.push_back(x);
    }
    int ans = INT_MIN;
    int pos = 0;//current position
    int an = INT_MAX;
    int another_ans = 0;

    //iterate all the possible colors
    // for(int i=1;i<=c;i++){
    //     //int ans = INT_MIN;
    //     pos = 0;
    //     ans = 0;
    //     for(int j=0;j<p;j++){
    //         if( i==pl[j]){
    //             //ans = j-pos;
    //             ans = max(ans, j - pos );
    //             pos = j+1;
    //             cout<<"cur pos: "<<pos<<" Jumps: "<<ans<<" ";
    //         }
    //     }
    //     another_ans = p - pos;
    //     if(an>=ans){
    //         an = ans;
    //     }
        
    //     cout<<an<<" another one: "<<another_ans<<endl<<endl<<endl;
    // }
    // cout<<an<<endl;

    
    

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}