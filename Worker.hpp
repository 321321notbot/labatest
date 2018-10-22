#pragma once
#include <string>
#include <iostream>
#include "Exception.hpp"

class Worker {
	std::string surname;//familia
	std::string init;//Инициалы
	std::string post;  //post
	int year;//год поступлени на работу

public:
	Worker(const std::string surname = "", const std::string init = "", const std::string post = "", int year = 0);
	Worker(const Worker& w);
	~Worker();
	/*геттеры и сеттеры для surname*/
	void setSurname(const std::string& str);
	const std::string& getSurname() const;
	// setting post
	void setPost(const std::string& str);
	const std::string& getPost() const;
	/*геттеры и сеттеры для init*/
	void setInit(const std::string& str);
	const std::string& getInit()const;
	/*геттеры и сеттеры для year*/
	void setYear(int n);
	int getYear()const;
	/*операторы ввода и вывода*/
	friend std::istream& operator >> (std::istream& in, Worker& t);
	friend std::ostream& operator <<(std::ostream& out, const Worker& t);
	Worker& operator =(const Worker& t);//опeратор присваивания
};
