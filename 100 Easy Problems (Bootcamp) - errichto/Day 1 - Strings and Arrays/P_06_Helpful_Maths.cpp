#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int len = s.size();
    vector<int> nums;
    for(int i=0;i<len;i++){
        if(s[i]!='+') nums.push_back(s[i]-'0');
    }
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
        if(i+1==nums.size()) cout<<nums[i]<<endl;
        else cout<< nums[i] <<"+";
    }
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}