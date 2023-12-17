// C++ program to demonstrate 
// logical operator keywords 
#include<iostream> 
using namespace std; 
int main() 
{ 
	int x, y, z; 
	x = 1; 
	y = 0; 
	z = 10; 

	// Using keywords for || (or), && (and) 
  cout<<(x or y)<<endl;
  cout<<((x or y) and y)<<endl;

	if ((x or y) and y ) 
	{ a
		cout << "Hi, we are in if."; 
	} 

	// Using keywords for ! (not), || (or), != (not_eq) 
	else if (not y or x not_eq z) 
	{ 
		cout << "Hi, we are in else if."; 
	} 
	return 0; 
} 
