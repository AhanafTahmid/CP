#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int l = s.size();
    string st = s;
    vector<int> b_cap;
    vector<int> b_small;
    vector<int> w_small;//words small
    vector<int> w_cap;//words capital
    for(int i=0;i<l;i++){
        if(s[i]=='B'){
            b_cap.push_back(i);
        }
        else if(s[i]=='b'){
            b_small.push_back(i);
        }
        else if(s[i]!='b' && s[i]>=97 && s[i]<=122){
            w_small.push_back(i);
        }
        else if(s[i]!='B' && s[i]>=65 && s[i]<=90){
            w_cap.push_back(i);
        }
    }


    //removing small letters
    for(auto x: b_small){
        for(int i=w_small.size()-1;i>=0;i--){
            
            if(x>w_small[i]){
                w_small[i]=10000;
                break;
                //cout<<x<<endl;
            }            
        }
    }


    vector<int> aa;
    //removing capital letters
    for(auto x: b_cap){
        for(int i=w_cap.size()-1;i>=0;i--){
            
            if(x>w_cap[i]){
                w_cap[i]=10000;
                break;
            }            
        }
    }




    string str= "";
    for(auto x: w_small){
        if(x!=10000){   
            aa.push_back(x);
            //str+=s[x];
        }
    }
    
    for(auto x: w_cap){
        if(x!=10000){   
            aa.push_back(x);
            //str+=s[x];
        }
    }

    sort(aa.begin(),aa.end());
    for(int i=0;i<aa.size();i++){
        str+=s[aa[i]];
    }
    cout<<str<<endl;

}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}