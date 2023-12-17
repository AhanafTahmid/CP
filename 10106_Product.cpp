#include <bits/stdc++.h>
using namespace std;

void biginteger_multiplication(){
    string s1,s2;//45489089 7523
    while(cin>>s1>>s2){

        if(s1.size()<s2.size()){
            swap(s1,s2);
        }

        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());


        int ct = 0;
        int carry = 0;
        long long ar[100000]={};
        int len = s2.size()+s1.size()-1;//total length of gun
        for(int i=0;i<s2.size();i++){
            carry = 0;
            for(int j=0;j<s1.size();j++){            
                ar[j+i]+= (s1[j]-'0') * (s2[i] - '0')+carry;
                carry = ar[j+i]/10;//taking carry
                ar[j+i]%=10;
                //cout<<ar[j+ct]<<"->"<<j+ct<<endl;
               //cout << "ar[" << j + ct << "]: " << ar[j + ct] << " carry: " << carry << endl;

            }
        }
        
        //cout<<len<<endl;
        //leading zero removal, making the array shorter here
        for(int i=len-1;i>=0;i--){
            //cout<<ar[i];
            if(ar[i]==0) len--;
            else break;
        }
        //cout<<len<<endl;
        reverse(ar,ar+len);
        for(int i=0;i<len;i++){
            cout<<ar[i];
        }
        cout<<endl;
    }
    
}

int main() {
    int t = 1;
	while(t--)biginteger_multiplication();
	return 0;
}