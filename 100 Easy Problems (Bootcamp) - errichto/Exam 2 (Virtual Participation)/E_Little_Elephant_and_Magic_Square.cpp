#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int mat[3][3];
    ll mid = 0, all_sum = 0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>mat[i][j];
            if(i==1)mid+=mat[i][j];
            all_sum+=mat[i][j];
        }
    }

    mid = all_sum/6;
    mat[1][1]=mid;
    ll sum_mid = mat[1][0]+mat[1][1]+mat[1][2];
    
    ll val1 = sum_mid - (mat[0][0]+mat[0][1]+mat[0][2]);
    mat[0][0] = val1;

    ll val2 = sum_mid - (mat[2][0]+mat[2][1]+mat[2][2]);
    mat[2][2] = val2;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }    

    

}


int main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}