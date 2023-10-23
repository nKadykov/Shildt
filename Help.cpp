#include <iostream>
using namespace std;

int main() {
	char choice;
	cout << "Help on:\n1. if\n2. switch\nChoose one:";
	cin >> choice;
	cout << endl;
	switch(choice){
		case '1':
			cout << "Statement if:\nif(condition) statement\n else statement;\n";
			break;
		case '2':
			cout << "Statement switch:\nswitch(statement) {\n\tcase constant:\n\t\tblock of statements\n\t\tbreak;\n...\n}\n";
			break;
		default:
			cout << "This point doesn't exist" << endl;
	}
	
	return 0;
}