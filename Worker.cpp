#include "Worker.hpp"

using namespace std;

Worker::Worker(const std::string surname, const std::string init, std::string post, int year) :
	surname(surname), init(init), year(year), post(post) {
	std::cout << "\nКонструктор Worker\n";
}
Worker::Worker(const Worker& w) : surname(w.surname), init(w.init), year(w.year), post(w.post) {
	std::cout << "\nКонструктор копирования Worker\n";
}
Worker::~Worker() {}
/*геттеры и сеттеры для surname*/
void Worker::setSurname(const std::string& str) {
	surname = str;
}

void Worker::setPost(const std::string& str) {
	post = str;
}
const std::string& Worker::getPost()const {
	return post;
}
const std::string& Worker::getSurname()const {
	return surname;
}
/*геттеры и сеттеры для init*/
void Worker::setInit(const std::string& str) {
	init = str;
}
const std::string& Worker::getInit()const {
	return init;
}
/*геттеры и сеттеры для year*/
void Worker::setYear(int n) {
	year = n;
}
int Worker::getYear()const {
	return year;
}

std::istream& operator >> (std::istream& in, Worker& w) {

	cout << "enter surname" << endl;
	in >> w.surname;
	cout << "enter init" << endl;
	in >> w.init;
	cout << "enter post" << endl;
	in >> w.post;
	cout << "enter year" << endl;
	in >> w.year;
	return in;
}
std::ostream& operator <<(std::ostream& out, const Worker& w) {
	out << "\nSurname: " << w.surname
		<< " " << w.init << endl << "PHRASE!!!" << w.post
		<< "\nYear: " << w.year;
	return out;
}

Worker& Worker::operator =(const Worker& w) {
	if (this != &w) {//защита от самоприсваивания
		surname = w.surname;
		init = w.init;
		year = w.year;
		post = w.post;
	}
	return *this;
}
