#include <bits/stdc++.h>
using namespace std; 

//for 3 variables -> 3! permutations, for 4 variables -> 4! permutations, 
int main()
{
	int arr[] = { 1, 2, 4, 3 };
	int n = 4;

	do {
		cout << arr[0] << " " << arr[1] << " " << arr[2] <<" " <<arr[3] << "\n";
	} while (next_permutation(arr, arr + n));


	cout<<endl;
	cout<<endl;


	string s = "ABC";

	do {
		cout<<s<<endl;
	} while (next_permutation(s.begin(), s.end()));



	return 0;
}

