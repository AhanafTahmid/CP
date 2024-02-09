#include <bits/stdc++.h>
using namespace std;
int main(){
    char s[10000];
    while(scanf("%s",s)==1){
        int f=0;
        int l = strlen(s);
        for(int i=l-1;i>=0;i--){
            if(s[i]==46) f=1;
            cout<<s[i];
        }
        if (f) cout << endl;
        else cout << " ";
    }

    return 0;
}