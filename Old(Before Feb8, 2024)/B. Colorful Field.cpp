#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,m,w,q;
    cin>>n>>m>>w>>q;

    //don't make array, it will overload
    vector<int> wasted_index;
    //Waste
    for(int i=0;i<w;i++){
        int a,b;
        cin>>a>>b;
        int idx = (a-1)*m + b;
        wasted_index.push_back(idx);//index to avoid
    }
    sort(wasted_index.begin(),wasted_index.end());

    //CKG order planting , Carrot -> Kiwi -> Grapes = 1,2,3
    for(int i=1;i<=q;i++){
        int a,b;
        cin>>a>>b;
        int idx = (a-1)*m + b;
        int was_ct = 0;
        int f = 0;

        for(auto x: wasted_index){
            if(x==idx){
                cout<<"Waste"<<endl;
                f = 1;
                break;
                
            }
            else if(x<idx)was_ct++;
            else if(x>idx) break;
        }


        if(!f){
            int ans = ((idx-was_ct)%3);
            if(ans==1) cout<<"Carrots"<<endl;
            else if(ans==2) cout<<"Kiwis"<<endl;
            else if(ans==0) cout<<"Grapes"<<endl;
        }


        
    }

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}