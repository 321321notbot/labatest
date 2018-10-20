#pragma once
#include <string>
#include <iostream>
#include "Exception.hpp"

class Worker{
	std::string surname;//фамилия
	std::string init;//Инициалы
	int year;//год поступлени на работу
	
public:
	Worker(const std::string surname = "", const std::string init = "", int year = 0);
	Worker(const Worker& w);
	~Worker();
	/*геттеры и сеттеры для surname*/
	void setSurname(const std::string& str);
	const std::string& getSurname() const;
	/*геттеры и сеттеры для init*/
	void setInit(const std::string& str);
	const std::string& getInit()const;
	/*геттеры и сеттеры для year*/
	void setYear(int n);
	int getYear()const;

};													  