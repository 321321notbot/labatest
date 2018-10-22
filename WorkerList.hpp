#ifndef LAB111_WORKERLIST_H
#define LAB111_WORKERLIST_H

#include <ostream>
#include "Worker.hpp"

class WorkerList {
private:
	Worker **data;
	int size;
public:
	WorkerList();

	friend std::ostream &operator<<(std::ostream &os, const WorkerList &list);
	void add(Worker &w);

	int getSize() const;
	void remove(int index);
	void getWorkers(int count);
	void sort();
	void filter(int maxAge);

	~WorkerList();
};


#endif //LAB111_WORKERLIST_H
