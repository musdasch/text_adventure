#include <iostream>

using namespace std;

int main(){
	int in(0);
	char text[]("This is a test");

	while(9 != in){
		cout << text << endl;
		cout << endl << endl;
		cout << "--- List of Options ---" << endl;
		cout << "1. rund" << endl;
		cout << "2. Do somthing" << endl;
		cout << "9. End" << endl;
		cout << endl;

		cout << "Input[1-2]: ";
		cin >> in;

		if(1 == in){
			cout << "Test";
		}

		if(2 == in){
			cout << "Text to do somthing 2" << endl;
		}
	}

	cout << "end" << endl;

	return 0;
}