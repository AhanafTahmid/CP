#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int ans = 0;
// void rec(int start, int end, vector<int>&a){
//     if(start>=end)return;
//     int mid = (start+end)/2;
    
//     if(is_sorted(a.begin(),a.begin()+mid)) ans = max(ans, mid-start);
//     if(is_sorted(a.begin()+mid+1,a.begin()+end)) ans = max(ans, end-mid);
//     rec(start, mid, a);
//     rec(mid+1, end, a);
// }

void solve(){
    int n;
    cin>> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    if(is_sorted(a.begin(),a.end())) cout<< n <<endl;
    else if(is_sorted(a.begin(),a.end(),greater<int>())) cout<< 1 <<endl;
    //else if call a recursion
    //else rec(0, n-1, a), cout<< ans <<endl;
    else{
        if(n==4){
            for(int i=0;i<n;i+=2){
                if(is_sorted(a.begin()+i,a.begin()+i+2)) cout<< 2 <<endl;
            }
        }
        else if(n==9){
            for(int i=0;i<n;i+=3){
                if(is_sorted(a.begin()+i,a.begin()+i+3)) cout<< 3 <<endl;
            }
        }
        else if(n==16){
            for(int i=0;i<n;i+=4){
                if(is_sorted(a.begin()+i,a.begin()+i+4)) cout<< 4 <<endl;
            }
        }
    }

}
int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}