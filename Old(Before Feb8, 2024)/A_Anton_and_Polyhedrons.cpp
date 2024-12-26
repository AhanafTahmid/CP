#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    map<string,int> mp;
    mp.insert({"Tetrahedron",4});
    mp.insert({"Cube",6});
    mp.insert({"Octahedron",8});
    mp.insert({"Dodecahedron",12});
    mp.insert({"Icosahedron",20});
    long long sum = 0;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        sum+=mp[s];
    }
    cout<<sum<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}