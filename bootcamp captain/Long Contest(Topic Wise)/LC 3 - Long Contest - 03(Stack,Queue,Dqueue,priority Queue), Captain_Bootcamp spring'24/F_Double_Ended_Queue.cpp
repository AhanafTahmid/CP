#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,m; cin>>n>>m;
    deque<int> dq;
    for(int i=0;i<m;i++){
        string s;cin>>s;
        int x;
        if(s=="pushLeft"){
            cin>>x;
            if(dq.size()==n){
                printf("The queue is full\n");
                continue;
            }
            dq.push_front(x);
            printf("Pushed in left: %lld\n", dq.front());
        }
        else if(s=="pushRight"){
            cin>>x;
            if(dq.size()==n){
                printf("The queue is full\n");
                continue;
            }
            dq.push_back(x);
            printf("Pushed in right: %lld\n", dq.back());
        }
        else if(s=="popLeft"){
            if(dq.size()==0){
                printf("The queue is empty\n");
                continue;
            }
            printf("Popped from left: %lld\n", dq.front());
            dq.pop_front();
        }
        else if(s=="popRight"){
            if(dq.size()==0){
                printf("The queue is empty\n");
                continue;
            }
            printf("Popped from right: %lld\n", dq.back());
            dq.pop_back();
        }


    }

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    for(int i=1;i<=t;i++){
        printf("Case %lld:\n",i);solve();
    }
    return 0;
}