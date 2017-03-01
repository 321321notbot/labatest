#include <iostream>

#include "Worker.hpp"
#include "WorkerList.hpp"

#define SWAP(A, B) { Worker t = A; A = B; B = t; } //меняем местами

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	WorkerList *wr = new WorkerList();
	const int count = 2;

	bool run = true;
	int mode;
	while (run) {
		cout << "\n1. ввод сотрудников\n2. вывод отсортированной базы данных \n3. Поиск по стажу работы\n";
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
