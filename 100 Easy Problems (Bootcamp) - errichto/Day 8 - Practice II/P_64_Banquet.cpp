
//With Map
// #include <bits/stdc++.h>
// using namespace std;
// #define endl '\n'
// #define ll long long

// void solve(){
//     int n;
//     cin>>n;
//     map<string, int> mp;
//     for(int i=0;i<n;i++){
//         char ch;
//         string a,b;
//         cin>> ch >> a >> b;
//         string st = a+b;
//         if(ch == '?'){
//             if(mp[st]>=1){
//                 cout<<"YES"<<endl;
//             }
//             else cout<<"NO"<<endl;
//         }
//         else if(ch == '+'){
//             mp[st]++;
//         }
//         else if(ch=='-'){
//             mp[st]--;
//         }
//     }
// }


// int main(){
//     int t=1;
//     //cin >> t;
//     while(t--)solve(); 
//     return 0;
// }


//With Set
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int n;
    cin>>n;
    set<pair<string,string>>st;
    for(int i=0;i<n;i++){
        char ch;
        string a,b;
        cin>> ch >> a >> b;
        if(ch=='?'){
            if(st.find(make_pair(a,b))!=st.end()){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else if(ch=='+'){
            st.insert(make_pair(a,b));
        }
        else if(ch=='-'){
            st.erase(make_pair(a,b));
        }
    }

}


int main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}