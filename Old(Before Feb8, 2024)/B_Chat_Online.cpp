#include <bits/stdc++.h>
using namespace std;

void solve(){
    int p,q,l,r;
    cin>>p>>q>>l>>r;
    vector<pair<int,int>> pp;
    vector<pair<int,int>> qq;
    for(int i=0;i<p;i++){
        int x, y;
        cin>>x>>y;
        pp.push_back({x,y});
    }

    for(int i=0;i<q;i++){
        int x, y;
        cin>>x>>y;
        qq.push_back({x,y});
    }
    //cout<<pp.size();
    int ct = 0;
    for(int i=0;i<pp.size();i++){
        for(int j=0;j<qq.size();j++){
            
            if(l<=qq[j].first && r>=qq[j].second){
                //cout<<qq[j].first<<endl;
                ct=((qq[j].second-qq[j].first+1)*2-1);
                //ct+=((r-l)*2-1);
                cout<<ct<<endl;
                continue;
            }
            else if(l==qq[i].first || l==qq[i].second){
                ct++;
            }
            else if(r==qq[i].first || r==qq[i].second){
                ct++;
            }
        }
    }
    //cout<<ct<<endl;

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}