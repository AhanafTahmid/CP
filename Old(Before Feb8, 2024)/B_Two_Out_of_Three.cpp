#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int ar[n+1];
    int fr[101]={};
    int c = 0;
    vector<int> ans;

    for(int i=1;i<=n;i++){
        cin>>ar[i];
        fr[ar[i]]++;
    }

    for(int i=1;i<=100;i++){        
        if(fr[i]>=2)c++;
    }
    int ct = 0;
    if(c<=1)cout<<-1<<endl;
    else{
        for(int i=1;i<=n;i++){
            if(ct%2==0 && fr[i]>=1){
                cout<<"1 ";//print only 1
                ct++;
                for(int j=2;j<=fr[i];j++){
                    cout<<"2 ";//print 222222
                }
            }

            else if(ct%2==1 && fr[i]>=1){
                ct++;
                cout<<"1 ";//print only 1
                for(int j=2;j<=fr[i];j++){
                    cout<<"3 ";//print 33333
                }
            }
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