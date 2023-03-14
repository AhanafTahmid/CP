#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,i;
    int fr[1000]={},ar[1000],max=-1000000;
    //vector<int> ar;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>ar[i];
    }
    for(i=1;i<=n;i++){
         fr[ar[i]]++;
    //     if(fr[ar[i]]>1){
    //         f = 1;
    //    }
    }
   //int max=*max_element(cloud.begin(), cloud.end());

   //finds max for the loop
    for(i=1;i<=n;i++){
        if(ar[i]>max){
            max=ar[i];
        }
    }

    for(i=1;i<=max;i++){
        for(int j=1;i<=max;j++){
            if(fr[ar[i]]>1 && fr[ar[i]]==fr[ar[j]]){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}