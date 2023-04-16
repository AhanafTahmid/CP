#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,q;
    scanf("%d",&n,&q);
    vector<int> ar;
    for(int i=0;i<n;i++){
        int yy;
        //cin>>yy;
        scanf("%d",&yy);
        ar.push_back(yy);
    }
    int l,nn,k;
    int s;
    for(int i=0;i<q;i++){
        scanf("%d%d%d",&l,&nn,&k);
        l--;
        nn--;
        int s1 = (nn-l+1)*k;
        s =0;
        for(int i=0;i<n;i++){
            if(i>=l and i<=nn){
                continue;
            }
            else s+=ar[i];
            
        }
        s +=s1;
        if(s%2==1)printf("YES\n");
        else printf("NO\n");
    }

    
    

}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}