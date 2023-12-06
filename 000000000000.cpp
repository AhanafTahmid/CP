#include <bits/stdc++.h>
using namespace std;

void bigmod(){
    string s1 = "111111999199";
    string s2 = "123993334";
  
   
    int carry = 0;
    string answer ;
    int x = 0;

    string s3;
    int max_string = s1.size();
    s3 = s2;
    if(s1.size()<=s2.size()){
        max_string = s2.size();
        s3 = s1;
    }
    reverse(s3.begin(),s3.end());

    //0 diye fillup kora
    for(int i=s3.size();i<max_string;i++){
        s3+='0';
    }
    reverse(s3.begin(),s3.end());
    s2=s3;


    //carry-r jnno ulta loop chalaite hocche
    for(int i=s1.size()-1;i>=0;i--){
        x = s1[i]-'0'+s2[i]-'0'+carry;
        answer+=x%10+'0';
        carry = x/10;
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