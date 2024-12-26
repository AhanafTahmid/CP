#include <bits/stdc++.h>
using namespace std;
vector<int> ar2;
vector<int> ar3;
void rec(vector<int> ar,int len, int c, int i){
    
    if(c==len) return;
    //cout<<c<<" "<<len<<endl;
    //cout<<ar[c]<<" ";

    if(ar[c]==ar2[i]){
        cout<<ar2[i]<<" ";
        i++;
        //rec(ar,len,c+1,i);
        
        for(auto it = ar3.rbegin(); it != ar3.rend(); ++it){
            cout<<c<<"iii"<<endl;
            cout<<endl;
            cout<<*it;
        }
        
    }
    else{
        ar3.push_back(ar[c]);
        //cout<<"eeee"<<endl;
    }
    rec(ar,len,c+1,i);
    
}


void solve(){

    int n;
    cin>>n;
    vector<int> ar;
    
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ar.push_back(x);
    }

    
    
    ar2 = ar;
    sort(ar2.begin(),ar2.end(),greater<int>());


    rec(ar,n,0,0);

    // int n;
    // cin>>n;
    // vector<int> a(n);
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    // vector<int> b(n);
    // b = a;
    // sort(b.begin(),b.end(),greater<int>());

    // stack<int> st;
    // int space = 0;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(b[i]!=a[j]){
    //             space++;
    //         }
    //         else if(b[i]==a[j] && a[j]!=0){
    //             cout<<a[j]<<" ";
    //             a[j]=0;//visited
    //             //i++;
    //             break;
    //         }
    //     }
    // }


}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}