#include <iostream>
using namespace std;

int main(){
	double foot, meter;
	int counter = 0;
	
	for(foot = 1; foot < 100; foot++){
		meter = foot / 3.28;
		cout << foot << "foot is " << meter << "meters." << endl;
		counter++;
		if(counter == 25){
			cout << endl;
			counter = 0;
		}
	}
	system("pause");

	return 0;
}