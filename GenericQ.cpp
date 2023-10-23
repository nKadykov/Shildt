#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cctype>
#include <unordered_map>
using namespace std;

const int maxQsize = 100;

template <class QType> class Queue {
	QType q[maxQsize];
	int size;
	int putloc, getloc;
public:
	Queue(int len){
		if(len > maxQsize)
			len = maxQsize;
		else if(len <= 0)
			len = 1;
		size = len;
		putloc = getloc = 0;
	}
	void put(QType ch){
		if(putloc == size){
			cout << '\n';
			cout << "Queue is full.\n";
			return;
		}
		putloc++;
		q[putloc] = ch;
	}
	QType get(){
		if(getloc == putloc){
			cout << "\nQueue is empty.\n";
			return 0;
		}
		getloc++;
		return q[getloc];
	}
};

int main() {
	Queue<int> iQa(10), iQb(10);

    iQa.put(1);
    iQa.put(2);
    iQa.put(3);

    iQb.put(10);
    iQb.put(20);
    iQb.put(30);
	
    cout << "Integer iQa: ";
    for(int i = 0; i < 3; i++) {
        cout << iQa.get() << ' ';
    }
    cout << endl;

    cout << "Integer iQb: ";
    for(int i = 0; i < 3; i++) {
        cout << iQb.get() << ' ';
    }
    cout << '\n';

    Queue<double> dQa(10), dQb(10);

    dQa.put(1.01);
    dQa.put(2.02);
    dQa.put(3.03);

    dQb.put(10.01);
    dQb.put(20.02);
    dQb.put(30.03);

    cout << "Double dQa: ";
    for(int i = 0; i < 3; i++) {
        cout << dQa.get() << ' ';
    }
    cout << '\n';

    cout << "Double dQb: ";
    for(int i = 0; i < 3; i++) {
        cout << dQb.get() << ' ';
    }
    cout << '\n';

    return 0;
}