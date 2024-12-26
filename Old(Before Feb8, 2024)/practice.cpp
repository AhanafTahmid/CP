// Explicitly copy constructor Calling
#include<iostream>
using namespace std;

class Student{
	int roll;
	public:
	void input(){
		cin>>roll;
	}
	void show(){
		cout<<roll<<endl;
	}
};

int main()
{
	Student s[99];
	for(int i=1;i<=100;i++){
		s[i].input();
	}

	for(int i=1;i<=100;i++){
		s[i].show();
	}

	return 0;
}