#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> ar(n);
    long long mini = LONG_MAX;
    int idx = 0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        if(ar[i]<mini){
            mini = ar[i];
            idx = i;
        }
    }


    is_sorted(ar.begin()+idx,ar.end())?cout<<idx<<endl:cout<<-1<<endl;

    // vector<int> ar2(n);
    // ar2 = ar;
    // sort(ar2.begin()+idx,ar2.end());

    // int f = 0;
    // for(int i=idx;i<n;i++){
    //     if(ar2[i]!=ar[i]) f = 1;
    // }

    //f==0?cout<<idx<<endl:cout<<-1<<endl;


}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}