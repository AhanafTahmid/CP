#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        vector<int> ar(n);
        double s=0; 
        for(int i=0;i<n;i++){
            cin>>ar[i];
            s+=ar[i];
        }
        sort(ar.begin(),ar.end());
        s = (s-ar[n-1])/(n-1);
        double s1 = ar[n-1];
        cout<<setprecision(9)<<fixed<<s+s1<<endl;
    }
    return 0;
}