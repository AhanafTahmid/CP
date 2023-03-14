#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,j;
    cin >> t;
    for(j=1;j<=t;j++){
        long long int a,b,s=0,mx,i;
        cin>>a>>b;
        long long ar[100000];
        for(i=0;i<a;i++){
            cin>>ar[i];
            s+=ar[i];
        }
        sort(ar,ar+a);
        mx = ar[a-1];

        for(i=2;i<=b;i++){
            s+=mx;
        }
        cout<<"Case "<<j<<": "<<s<<endl;
    }; 
    return 0;
}



