#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long a,b;
    cin>>a>>b;
    if(b-a<=1){
        cout<<"-1"<<endl;
    }
    else if(a%2==0 && b%2==0 ){//4 6 
        if(a+2>b){
            cout<<"-1"<<endl;
        }
        else cout<<a<<" "<<a+1<<" "<<a+2<<endl;
        
    }
    else if(a%2==1 && b%2==0 ){// 3 6
        if(a+3>b){
            cout<<"-1"<<endl;
        }
        else cout<<a+1<<" "<<a+2<<" "<<a+3<<endl;
    }
    else if(a%2==0 && b%2==1){//4 7
        if(a+2>b){
            cout<<"-1"<<endl;
        }
        else cout<<a<<" "<<a+1<<" "<<a+2<<endl;
    }
    else if(a%2==1 && b%2==1){//3 7
        if(a+3>b){
            cout<<"-1"<<endl;
        }
        else cout<<a+1<<" "<<a+2<<" "<<a+3<<endl;
    }
    
    
    
    


}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}