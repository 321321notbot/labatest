#include "Worker.hpp"

Worker::Worker(const std::string surname, const std::string init, int year):
surname(surname), init(init),year(year){
	std::cout << "\n����������� Worker\n";
}
Worker::Worker(const Worker& w):surname(w.surname), init(w.init),year(w.year){
	std::cout << "\n����������� ����������� Worker\n";
}
Worker::~Worker(){}
	/*������� � ������� ��� surname*/
void Worker::setSurname(const std::string& str){
	surname = str; 
}
const std::string& Worker::getSurname()const {
	return surname;
}
	/*������� � ������� ��� init*/
void Worker::setInit(const std::string& str){
	init = str;
}
const std::string& Worker::getInit()const { 
	return init;
}
	/*������� � ������� ��� year*/
void Worker::setYear(int n){
	year = n;
}
int Worker::getYear()const{ 
	return year;
}
