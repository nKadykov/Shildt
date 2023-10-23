#include <iostream>
using namespace std;

int main() {
	char choice;
	for(;;){
		do{
			cout << "Help on:" << endl;
			cout << "1. if\n2. switch\n3. for\n4. while\n5. do-while\n6. break\n7. continue\n8. goto\nEnter one point: ";
			cin >> choice;
		} while(choice < '1' || choice > '8' && choice != 'q');
		if(choice == 'q')
			break;
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
			case '6':
				cout << "Sentence break:\nbreak;" << endl;
				break;
			case '7':
				cout << "Sentence continue:\ncontinue;" << endl;
				break;
			case '8':
				cout << "Sentence goto:\ngoto mark;" << endl;
				break;
		}
	}
	
	return 0;
}