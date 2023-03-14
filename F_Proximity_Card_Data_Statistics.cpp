#include <bits/stdc++.h>
using namespace std;


int main(){

    int t,ap=0,am=0,abp=0,abm=0,bp=0,bm=0,op=0,om=0,i,j;
    cin >> t;
    for(i=1;i<=t;i++){
        string a;
        int c=0;
        getline(cin,a);

        if(a[a.size()-2]=='A' && a[a.size()-1]=='+') ap++;
        else if(a[a.size()-2]=='A' && a[a.size()-1]=='-') am++;
        else if(a[a.size()-3]=='A' && a[a.size()-2]=='B' && a[a.size()-1]=='+') abp++;
        else if(a[a.size()-3]=='A' && a[a.size()-2]=='B' && a[a.size()-1]=='-') abm++;

        else if(a[a.size()-2]=='B' && a[a.size()-1]=='+') bp++;
        else if(a[a.size()-2]=='B' && a[a.size()-1]=='-') bm++;

        else if(a[a.size()-2]=='O' && a[a.size()-1]=='+') op++;
        else if(a[a.size()-2]=='O' && a[a.size()-1]=='-') om++;

        for(j=1000;j<=2023;j++){
            if(a[a.size()-4]=='7')
        }


    }
    cout<<"A+ "<<ap<<endl;
    cout<<"A- "<<am<<endl;
    cout<<"AB+ "<<abp<<endl;
    cout<<"AB- "<<abm<<endl;
    cout<<"B+ "<<bp<<endl;
    cout<<"B- "<<bm<<endl;
    cout<<"O+ "<<op<<endl;
    cout<<"O- "<<om<<endl;

    return 0;
}