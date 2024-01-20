// #include <bits/stdc++.h>
// using namespace std;

// void solve(){
//     int n,x;
//     cin>>n>>x;
//     vector<int> a(n);
//     for(int &i: a)cin>>i;
//     sort(a.begin(),a.end());

//     int ans = 0;
//     int ct = 0;
//     while(1){
//         int p = x;
//         for(int i=0;i<n;i++){
//             //cout<<a[i]<<" ";
//             if(a[i]<=p)ct++;
//             p-=a[i];
//             a[i]++;

//             n = n - ct;
//         }
//         //cout<<" =="<<ct<<endl;
//         ans+=ct;
//         if(ct==0)break;
//         ct = 0;
//     }
//     cout<<ans<<endl;

// }


// int main(){

//     int t=1;
//     //cin >> t;
//     while(t--)solve(); 
//     return 0;
// }






