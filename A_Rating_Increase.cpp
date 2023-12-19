#include <bits/stdc++.h>
using namespace std;
int convert(string s) { 
        int num = 0; 
        int n = s.size(); 
        for (int i = 0; i < n; i++) 
            num = num * 10 + (s[i] - 48); 
        return num;
} 

void solve(){
    string s;
    cin>>s;
    string s1="";
    string s2 = "";
    s1 = s[0];
    
    int c = 1;
    if(s.size()>1){
        if(s[c]=='0'){
            while(s[c]=='0'){
                s1+=s[c];
                c++;
            }
        }
    }
    

    
    for(int i=c;i<s.size();i++){
        s2+=s[i];
    }



    

    int n1 = convert(s1);
    int n2 = convert(s2);

    if(n1<n2){
        cout<<n1<<" "<<n2<<endl;
    }
    else cout<<-1<<endl;

}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}