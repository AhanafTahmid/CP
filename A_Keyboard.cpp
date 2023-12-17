#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    string kw;
    cin>>kw;
    
    map<char,char> mpr;//map right
    mpr['w']='q';
    mpr['e']='w';
    mpr['r']='e';
    mpr['t']='r';
    mpr['y']='t';
    mpr['u']='y';
    mpr['i']='u';
    mpr['o']='i';
    mpr['p']='o';
    mpr['a']='p';
    mpr['s']='a';
    mpr['d']='s';
    mpr['f']='d';
    mpr['g']='f';
    mpr['h']='g';
    mpr['j']='h';
    mpr['k']='j';
    mpr['l']='k';
    mpr[';']='l';
    mpr['x']='z';
    mpr['c']='x';
    mpr['v']='c';
    mpr['b']='v';
    mpr['n']='b';
    mpr['m']='n';
    mpr[',']='m';
    mpr['.']=',';
    mpr['/']='.';
    map<char,char> mpl;//map left
    mpl['q']='w';
    mpl['w']='e';
    mpl['e']='r';
    mpl['r']='t';
    mpl['t']='y';
    mpl['y']='u';
    mpl['u']='i';
    mpl['i']='o';
    mpl['o']='p';
    mpl['a']='s';
    mpl['s']='d';
    mpl['d']='f';
    mpl['f']='g';
    mpl['g']='h';
    mpl['h']='j';
    mpl['j']='k';
    mpl['k']='l';
    mpl['l']=';';
    mpl['z']='x';
    mpl['x']='c';
    mpl['c']='v';
    mpl['v']='b';
    mpl['b']='n';
    mpl['n']='m';
    mpl['m']=',';
    mpl[',']='.';
    mpl['.']='/';

    if(s=="L"){
        for(int i=0;i<kw.size();i++){
           cout<<mpl[kw[i]];
        }
    }
    else{
        for(int i=0;i<kw.size();i++){
           cout<<mpr[kw[i]];
        }
    }


}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}