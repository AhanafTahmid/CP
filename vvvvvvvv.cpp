#include <bits/stdc++.h>
using namespace std;


bool comp(const pair<int,int> &a,  const pair<int,int> &b){
    return a.second > b.second; 
}


vector<int> getFrequencies(vector<int> &n) {   
  
    //return getFrequencies(n);
    vector<int> ans;
    vector<int> v1;
    map<int,int> mp;
    for(auto i:n){
        mp[i]++;
       // v1.push_back(mp[i]);
    }


    for (const auto& entry : mp) {
        ans.push_back(entry.second);
    }
    //sort(ans.begin(),ans.end());


    vector<pair<int,int>> vc;
    int a,b;
    for(auto ii: mp){
        //a.push_back(a[i]);
        //b.push_back(b[i]);
        a = ii.first;
        b = ii.second;
        vc.push_back( make_pair(a,b) );

    }
    sort(vc.begin(),vc.end(),comp);



    vector<int> v2;
    int c =0;
    for(auto ii: vc){
        //a.push_back(a[i]);
        //b.push_back(b[i]);
       // a = ii.first;
       // b = ii.second;
      // cout<<ii.first<<ii.second<<endl;
       if(c==2) break;
        v2.push_back(ii.first);
        c++;

    }
    sort(v2.begin(),v2.end());

    return v2;  

        
}



int main() {
    vector<int> v = {10, 10, 10, 3, 3, 3};
    
    vector<int> frequencies = getFrequencies(v);
    
    // Print the frequencies
    for (int frequency : frequencies) {
        cout << frequency << " ";
    }
    cout << endl;
    
    return 0;
}



