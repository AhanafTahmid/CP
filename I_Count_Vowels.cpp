#include <bits/stdc++.h>
using namespace std;
int c = 0;
void solve(string p,int l, int i){
    if(l==0){
        cout<<c<<endl;
        return;
    }
    if(p[i]=='a' || p[i]=='e' || p[i]=='i' || p[i]=='o' || p[i]=='u' || 
       p[i]=='A' || p[i]=='E' || p[i]=='I' || p[i]=='O' || p[i]=='U' 
       ) c++;
    solve(p,l-1,i+1);
}

int main(){
    string n;
    getline(cin,n);
    int l = n.size();
    solve(n,l,0);
    return 0;
}