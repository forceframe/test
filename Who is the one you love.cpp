#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	int age;
	cout << "Who is the one you love?: ";
	cin >> name;
	cout << "\nHow many time do want to repeat?: ";
	cin >> age;
	cout << "<\n3 <3 <3 <3 <3 <3 <3 <3 <3 <3 <3 <3";
	while(age != 0){
		cout << "I love " << name << endl;\
		age = age - 1;
	}  
	cout << "<\n3 <3 <3 <3 <3 <3 <3 <3 <3 <3 <3 <3";
	return 0;
}

