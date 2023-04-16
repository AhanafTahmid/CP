#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    int c=0;
    while(1){
        cin>>s;
        if(s=="*") return 0;
        else{
            c++;
            if(s=="Hajj") cout<<"Case "<<c<<": Hajj-e-Akbar"<<endl;
            else if(s=="Umrah") cout<<"Case "<<c<<": Hajj-e-Asghar"<<endl;
     }
    }
    return 0;
}