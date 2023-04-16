#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string q = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    while(getline(cin,s)){
        int l = s.size();
        int ll = q.size();
        for(int i=0;i<l;i++){
            for(int j=0;j<ll;j++){
                if(s[i]==q[j]) s[i]=q[j-1];
            }
        }
        cout<<s<<endl;
    }

    return 0;
}