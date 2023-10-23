#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cctype>
#include <unordered_map>
using namespace std;

class Help {
public:
	void helpon(char what);
	void showmenu();
	bool isvalid(char ch);
};

void Help::helpon(char what) {
	switch(what){
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
	cout << endl;
}

void Help::showmenu() {
	cout << "Help on:\n1. if\n2. switch\n3. for\n4. while\n5. do-while\n6. break\n7. continue\n8. goto\nChoose one of points (q for break): ";
}

bool Help::isvalid(char ch) {
	if(ch < '1' || ch > '8' && ch != 'q')
		return false;
	else
		return true;
}

int main() {
	char choice;
	Help hlpob;
	for(;;){
		do{
			hlpob.showmenu();
			cin >> choice;
		} while(!hlpob.isvalid(choice));
		if(choice == 'q')
			break;
		cout << endl;
		hlpob.helpon(choice);
	}
	
	return 0;
}