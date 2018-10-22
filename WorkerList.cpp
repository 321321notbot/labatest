#include "WorkerList.hpp"

#include <iostream>

using namespace std;

WorkerList::WorkerList() {
	size = 0;
	data = new Worker*[size];
	// enter text
}

WorkerList::~WorkerList() {
	// enter text
	for (int i = 0; i < this->size; ++i) {
		delete this->data[i];
	}
	this->size = 0;
}

int WorkerList::getSize() const {
	return size;
}

std::ostream &operator<<(std::ostream &os, const WorkerList &list) {
	for (int i = 0; i < list.size; ++i) {
		cout << *list.data[i] << endl;
	}
	return os;
}

void WorkerList::add(Worker &w) {
	this->size++;
	auto **copy = new Worker*[this->size - 1];
	for (int i = 0; i < this->size - 1; ++i) {
		copy[i] = this->data[i];
	}
	this->data = new Worker*[this->size];
	for (int i = 0; i < this->size - 1; ++i) {
		this->data[i] = copy[i];
	}
	this->data[this->size - 1] = &w;
	delete[]copy;
}

void WorkerList::remove(int index) {
	if (index >= this->size || index < 0) {
		cout << "Cant delete, try another index" << endl;
	}
	else {
		auto **copy = new Worker*[this->size];
		for (int i = 0; i < this->size; ++i) {
			copy[i] = this->data[i];
		}
		this->size--;
		this->data = new Worker*[this->size];
		int k = 0;
		for (int i = 0; i < this->size + 1; ++i) {
			if (i == index) {
				continue;
			}
			this->data[k] = copy[i];
			k++;
		}

		delete[]copy;
	}
}

void WorkerList::getWorkers(int count) {
	if (count <= 0) {
		return;
	}
	cout << "enter " << count << " workers" << endl;
	for (int i = 0; i < count; ++i) {
		Worker *wr = new Worker();
		cin >> *wr;
		add(*wr);
	}
	sort();
	cout << *this;
}

void WorkerList::sort() {
	Worker *wr;
	for (int i = 0; i < size - 1; ++i) {
		if (data[i]->getSurname() > data[i + 1]->getSurname()) {
			wr = data[i];
			data[i] = data[i + 1];
			data[i + 1] = wr;
		}
	}
}

void WorkerList::filter(int maxAge) {
	bool fl = false;
	for (int i = 0; i < size; ++i) {
		if (data[i]->getYear() >= maxAge) {
			fl = true;
			cout << *data[i] << endl;
		}
	}
	if (!fl) {
		cout << "Not found" << endl;
	}
}
