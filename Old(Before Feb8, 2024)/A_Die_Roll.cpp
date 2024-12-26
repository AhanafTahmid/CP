#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b;
    cin>>a>>b;
    int m = max(a,b);
    int t = 6;//total
    int c = 6-m+1;//chances
    int v1,v2;
    for(int i=2;i<=6;i++){
        
            if(t%i==0 && c%i==0){// 3 3 = 4/6 = 2/3  ,   1 1 = 6/2 == 3 , 6/2==3
                v1 = t/i;
                v2 = c/i;

                if(v1==v2){
                    cout<<1<<"/"<<1<<endl;
                    return;
                }
                else{
                     cout<<v2<<"/"<<v1<<endl;
                     return;
                }
        }
        
    }
    
    cout<<c<<"/"<<t<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}