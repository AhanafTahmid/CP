#include <bits/stdc++.h>
using namespace std;

bool isValid(char ch){
    return ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u' && ch!='y';
}

void solve(){
    string s;
    cin>>s;
    int l = s.size();
    transform(s.begin(),s.end(),s.begin(),::tolower);
    vector<char> new_string;
    for(int i=0;i<l;i++){
        if(isValid(s[i])) new_string.push_back(s[i]);
    }
    for(auto x: new_string){
        cout<<"."<<x;
    }
    cout<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}