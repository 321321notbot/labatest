#include "Worker.hpp"

Worker::Worker(const std::string surname, const std::string init, int year):
surname(surname), init(init),year(year){
	std::cout << "\nКонструктор Worker\n";
}
Worker::Worker(const Worker& w):surname(w.surname), init(w.init),year(w.year){
	std::cout << "\nКонструктор копирования Worker\n";
}
Worker::~Worker(){}
	/*геттеры и сеттеры для surname*/
void Worker::setSurname(const std::string& str){
	surname = str; 
}
const std::string& Worker::getSurname()const {
	return surname;
}
	/*геттеры и сеттеры для init*/
void Worker::setInit(const std::string& str){
	init = str;
}
const std::string& Worker::getInit()const { 
	return init;
}
	/*геттеры и сеттеры для year*/
void Worker::setYear(int n){
	year = n;
}
int Worker::getYear()const{ 
	return year;
}

std::istream& operator >>(std::istream& in, Worker& w){
	if(!(in >> w.surname >> w.init >> w.year)){//если некорректный ввод, выбиваем исключение
		throw Exception("Ошибка ввода");
	}
	return in;
}
std::ostream& operator <<(std::ostream& out, const Worker& w){
	out << "\nДанные: " << w.surname
		 << " " << w.init
		 << "\nГод: " << w.year;
    return out;
}

Worker& Worker::operator =(const Worker& w){
	if(this != &w){//защита от самоприсваивания
		surname = w.surname;
		init = w.init;
		year = w.year;
	}
	return *this;
}