#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main(){
	float max = 0, min = 0;
	int count = 0;
	cout << "Enter range of the scores [min, max] for counting: ";
	cin >> min >> max;
	if(max <= min){
		cout << "Invalid input. (max >= min)";
	}else{
		ifstream source;
		string text;
	    source.open("text.txt");
		while(getline(source, text)){
			
			if(atof(text.c_str()) > min && atof(text.c_str()) < max){
				count++;
		    }
	    }  
	    source.close();
	    cout << "The number of students who have scores in this range = " << count;
		
	}
	return 0;
}
