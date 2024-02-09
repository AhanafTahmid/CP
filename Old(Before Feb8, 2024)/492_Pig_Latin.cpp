#include <bits/stdc++.h>
using namespace std;
int main(){
    char s[10000];
    while(scanf("%s",s)==1){
        int f=0;
        int l = strlen(s);
        for(int i=0;i<l;i++){
            if(s[i]=='a' && i==0){
                f=2;
                cout<<s<<"ay";
                break;
            }
            else{
                i+=1;
                cout<<s[i];
            }
            
        }
        cout<<s[0]<<"ay"<<endl;
        //if (f==2) cout<<s<<"ay"<<endl;
        //else cout << ' ';
    }

    return 0;
}