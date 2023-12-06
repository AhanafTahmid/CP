#include <bits/stdc++.h>
using namespace std;

void bigmod(){
    string s1="1234";
    string s2 = "56";//999199+123993334=124992533

    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());

    int carry = 0;
    string answer ;
    int x = 0;
		

    if(s1.size()<=s2.size()){
        swap(s1,s2);
    }

    //assuming s2 choto
    for(int i=0;i<s2.size();i++){
        x = s1[i]-'0'+s2[i]-'0'+carry;
        answer+=x%10+'0';//getting the last digit, string e rakhte hobe, karon ekta somoy exceed kore felbe
        carry = x/10;//getting the carry, cause 9+9=18 highest can go
        //cout<<answer<<" "<<carry<<endl;
    }
    x = 0;
    //ekhane ar s2 nai
    for(int i=s2.size();i<s1.size();i++){
        x = s1[i]-'0'+carry;
        answer+=x%10+'0';
        carry = x/10;
        //cout<<answer<<" "<<carry<<endl;
    }
    reverse(answer.begin(),answer.end());
    cout<<answer<<endl;
    
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)bigmod(); 
    return 0;
}