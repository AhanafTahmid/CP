#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    getline(cin,s);
    //for(int i=0;i<l;i++){}
    //reverse(s.begin(),s.end());
    string s2=s+' ';
    //cout<<s2;
    int l = s2.size();
    int j=0;
    for(int i=0;i<l;i++){

        if(s2[i]==' '){
            reverse(s2.begin()+j,s2.begin()+i);
            //cout<<j<<i<<endl;;
            //cout<<s2[j];
            j = i+1;
            
        }
    }
    for(int i=0;i<l-1;i++){
        cout<<s2[i];
    }
    

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}