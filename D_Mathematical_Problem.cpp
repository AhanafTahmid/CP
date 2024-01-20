#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int ss;
    for(int i=0;i<n;i++){
        cin>>ss;
        int ct = ss;
            if(ss==1){
                cout<<1<<endl;
                continue;
            }
            ct--;
            cout<< "196" + string(ss-3,'0') <<endl;

            for(int j=0;j*2+3<=ss;j++){
                if(ct){
                    ct--;
                    cout<<"1" + string(j,'0') + "6" + string(j,'0') + "9" + string(ss-(j*2+3),'0')<<endl;
                }
                if(ct){
                    ct--;
                    cout<<"9" + string(j,'0') + "6" + string(j,'0') + "1" + string(ss-(j*2+3),'0')<<endl;
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