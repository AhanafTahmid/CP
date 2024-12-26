#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        stack<char>li;
        int rc=0;
        int c=0;
        int cc=0;
        string s;
        cin>>s;
        for(int j=0;j<s.size();j++){
            if(s[j]=='<'){
                li.push('<');
                //rc++;
            }
            else if(s[j]=='>'){
                //rc++;
                // if(!li.empty()){
                //     li.pop();
                //     //c++;
                //     if(li.empty()){
                //         //cc+=c*2;
                //         c++;
                //     }
                // }
                // else{
                //     cout<<cc<<endl;
                //     return;
                // }
                if(li.empty()){
                    break;
                }
                else {
                    li.pop();
                    if(li.empty()) cc=j+1;
                }
            }
            
        }
        cout<<cc<<endl;
    }
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}