#include <iostream>

#include "Worker.hpp"
#include "WorkerList.hpp"

#define SWAP(A, B) { Worker t = A; A = B; B = t; } //������ �������

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	WorkerList *wr = new WorkerList();
	const int count = 2;

	bool run = true;
	int mode;
	while (run) {

		// cout menu here

		cin >> mode;
		if (mode == 0) {
			run = false;
		}
		else if (mode == 1) {
			wr->getWorkers(count);
		}
		else if (mode == 2) {
			cout << *wr;
		}
		else if (mode == 3) {
			int maxAge;
			cout << "Enter max age" << endl;
			cin >> maxAge;
			wr->filter(maxAge);
		}
		else {
			continue;
		}
	}

	return 0;
}
