#include <iostream>
using namespace std;

int main() {
	char choice;
	do{
		cout << "Help on:" << endl;
		cout << "1. if\n2. switch\n3. for\n4. while\n5. do-while\nEnter one point: ";
		cin >> choice;
	} while(choice < '1' || choice > '5');
	cout << endl;
	switch(choice){
		case '1':
			cout << "Sentence if:\nif(condition) sentence;\nelse sentence;" << endl;
			break;
		case '2':
			cout << "Sentence switch:\nswitch(sentence){\n\tcase constant:\n\t\tblock of sentences\n\t\tbreak;\n...\n}" << endl;
			break;
		case '3':
			cout << "Cycle for:\nfor(initialization; condition; incrementation) sentence;" << endl;
			break;
		case '4':
			cout << "Cycle while:\nwhile(condition) sentence;" << endl;
			break;
		case '5':
			cout << "Cycle do-while:\ndo{\n\tsentence;\n} while (condition);" << endl;
			break;
	}
	
	return 0;
}