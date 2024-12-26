#include <bits/stdc++.h>
using namespace std;

bool odd_check(int n){
    if(n%2==1){
        return 1;
    }
    return 0;
}

bool b_pal(int n){
    int num = n;

    string bin1="",bin2="";


    /*while (n > 0) {
        int remainder = n % 2;
        binary += remainder * base;
        n /= 2;
        base *= 10;
    }*/

    while(n>0){
        int rem = n%2;
        n/=2;
        if(rem==0){
            bin1+='0';
        }
        else{
            bin1+='1';
        }
    }

    //checking palindrome
    bin2 = bin1;
    reverse(bin2.begin(),bin2.end());
    if(bin1 == bin2){
        return 1;
    }
    return 0;

}

int main(){

    int t=1;
    //cin >> t;
    while(t--){
        int n;
        cin>>n;
        if(odd_check(n) && b_pal(n)){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        
    }
    return 0;
}