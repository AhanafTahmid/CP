#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long size,ss;
	cin>>size>>ss;
	long long arr[size];
    //7
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
    //4
	int sq[ss];
	for(int i=0;i<ss;i++){
		cin>>sq[i];
	}
	int z = 0;
	int counter = 0;
	for(int i=0;i<size;i++){
		if(arr[i] == sq[z]){
			counter++;
			z++;
		}
	}
	if(counter == ss){
		cout<<"YES"<<endl;
	} else {
		cout<<"NO"<<endl;
	}
	
	
}