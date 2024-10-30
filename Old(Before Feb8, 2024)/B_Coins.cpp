// #include <bits/stdc++.h>
// using namespace std;

// bool comp(pair<char,int> a, pair<char,int> b){
//     return a.second<b.second;
// }

// void solve(){
//     string a,b,c;
//     cin>>a>>b>>c;
//     map<char,int> mp={{'A',0},{'B',0},{'C',0}};
//     for(int i=0;i<2;i++){
//         if((a[i]=='A' && a[i+1]=='>') || ( a[i]=='<' && a[i+1]=='A')) mp['A']++;
//         if((b[i]=='A' && b[i+1]=='>') || ( b[i]=='<' && b[i+1]=='A')) mp['A']++;
//         if((c[i]=='A' && c[i+1]=='>') || ( c[i]=='<' && c[i+1]=='A')) mp['A']++;


//         if((a[i]=='B' && a[i+1]=='>') || ( a[i]=='<' && a[i+1]=='B')) mp['B']++;
//         if((b[i]=='B' && b[i+1]=='>') || ( b[i]=='<' && b[i+1]=='B')) mp['B']++;
//         if((c[i]=='B' && c[i+1]=='>') || ( c[i]=='<' && c[i+1]=='B')) mp['B']++;


//         if((a[i]=='C' && a[i+1]=='>') || ( a[i]=='<' && a[i+1]=='C')) mp['C']++;
//         if((b[i]=='C' && b[i+1]=='>') || ( b[i]=='<' && b[i+1]=='C')) mp['C']++;
//         if((c[i]=='C' && c[i+1]=='>') || ( c[i]=='<' && c[i+1]=='C')) mp['C']++;

//     }


//     vector<pair<char,int>> vc(mp.begin(),mp.end());
//     sort(vc.begin(),vc.end(),comp);

//     if(mp['A']==1 && mp['B']==1 && mp['C']==1) cout<<"Impossible"<<endl;
//     else{
//         for(auto x:vc){
//             cout<<x.first;
//         }
//     }

// }


// int main(){

//     int t=1;
//     //cin >> t;
//     while(t--)solve(); 
//     return 0;
// }




//Bismillahir Rahmanir Raheem
//#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<map>
#include<math.h>
#include<vector>
#include<algorithm>
#include<string>
#include<set>
using namespace std;
#define pb push_back
#define all(x) (x).begin(), (x).end()
typedef long long LL;
typedef vector<int> vi;
typedef map<int, int> mii;
typedef pair<int, int> pii;
#define FF first
#define SS second
#define mxN (int) 2e5 + 2
#define MP make_pair

int main()
{
    string s = "ABC";
    map<pair<char,char>, bool > mc;
    string in;
    for(int i = 0; i < 3; i++){
        cin >> in;
        if(in[1] == '<') mc[MP(in[0], in[2])] = true;
        else mc[MP(in[2], in[0])] = true;
    }
    bool ok = 0;
    do{
        if(mc[MP(s[0], s[1])] &&
            mc[MP(s[0], s[2])] &&
            mc[MP(s[1], s[2])] ) {
            cout << s << endl;
            ok = 1;
            break;
        }
    }while(next_permutation(all(s)));
    if(!ok) cout << "Impossible\n";
    return 0;
}




 