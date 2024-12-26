#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

string a,b;
vector<int>a_val;
vector<int>b_val;
int ans = INT_MAX;
bool ok(double x){
    int line1 = 0, line2 = 0;
    int val1 = 0, val2 = 0;

    //for first string
    for(int i=0;i<a_val.size();){
        double v = static_cast<double>(a_val[i]);
        //if - ashche
        if(i%2==1){
            line1++;
            i++;
            continue;
        }
        //remains space
        else if((v/x)==0){
            i+=2;
            line1++;
        }
        //no remaining space
        else if((int)v%(int)x==0){
            line1+=(v/x);
            i++;
        }
        //remains space
        else if((int)v%(int)x!=0){
            line1+=(ceil(v/x));
            i+=2;
        }
        //cout<< line1 <<endl;
    }

    //for second string
    for(int i=0;i<b_val.size();){
        double v = static_cast<double>(b_val[i]);
        //if - ashche
        if(i%2==1){
            line2++;
            i++;
            continue;
        }
        //remains space
        else if((v/x)==0){
            i+=2;
            line2++;
        }
        //no remaining space
        else if((int)v%(int)x==0){
            line2+=(v/x);
            i++;
        }
        //remains space
        else if((int)v%(int)x!=0){
            line2+=(ceil(v/x));
            i+=2;
        }
        //cout<< line2 <<endl;
    }



    // cout<< line1 <<endl;
    // cout<< line1 <<endl;

    //cout<< line1 <<" = "<<line2<<" = "<<x<<endl;

    if(line1==line2)ans = x;
    //return line1>=line2; 
}

void solve(){
    cin>> a;
    cin>> b;
    int ct = 0;

    int no_dash = 0;
    //finding the size of all the values in a
    for(int i=0;i<a.size();i++){
        if(a[i]=='-'){
            a_val.push_back(ct);
            a_val.push_back(1);
            ct = 0;
            no_dash = 1;
        }
        else ct++;
    }
    a_val.push_back(ct);


    //finding the size of all the values in b
    int ct2 = 0;
    for(int i=0;i<b.size();i++){
        if(b[i]=='-'){
            b_val.push_back(ct2);
            b_val.push_back(1);
            ct2 = 0;
        }
        else ct2++;
    }
    b_val.push_back(ct2);
    
    // for(auto x: a_val)cout<< x <<" ";
    // cout<<endl;

    // for(auto x: b_val)cout<< x <<" ";
    // cout<<endl;


    int w; cin>> w;
    //ok(9.00);

    int l = 0, r = w, m;
    //ok(5.00);
    // while(l+1<r){
    //     m = (l+r)>>1;
    //     if( ok(static_cast<double>(m)) ) l = m;
    //     else r = m;
    // }
    // cout<< l << endl;
    // cout<< r << endl;


    // if(no_dash==0 && a.size()!=b.size()){
    //     cout<< - 1 << endl;
    //     return;
    // }
    // for(int i=1;i<=w;i++){
    //     ok(static_cast<double>(i));
    // }
    // cout<< ans << endl;

}


signed main(){
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}