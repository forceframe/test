#include <iostream>
#include <string>
using namespace std;

string tommy(int face){
	int habit;
	string x;
	if(face < 50){
		cout << "Habit : ";
		cin >> habit;
		if(habit < 50){
			x = "Unfriend";
		} if(habit > 50){
			x = "Friend";
		}
	}else if(50 < face && face < 80){
		cout << "Habit : ";
		cin >> habit;\
		if(habit < 50){
			x = "One-night-stand";
		}else if(habit > 50){
			x = "Friend";
		}
	}else if(80 < face){
		cout << "Habit : ";
		cin >> habit;
		if(habit < 50){
			x = "One-night-stand";
		}else if(habit > 50){
			x = "Girlfriend";
		}
	}
	return x;
}

int main(){
	int face;
	cout << "Face : ";
	cin >> face;
	cout << "status : " << tommy(face);
	return 0;
}
