#pragma once
#include <string>
#include <iostream>
#include "Exception.hpp"

class Worker {
	std::string surname;//familia
	std::string init;//��������
	std::string post;  //post
	int year;//��� ���������� �� ������

public:
	Worker(const std::string surname = "", const std::string init = "", const std::string post = "", int year = 0);
	Worker(const Worker& w);
	~Worker();
	/*������� � ������� ��� surname*/
	void setSurname(const std::string& str);
	const std::string& getSurname() const;
	// setting post
	void setPost(const std::string& str);
	const std::string& getPost() const;
	/*������� � ������� ��� init*/
	void setInit(const std::string& str);
	const std::string& getInit()const;
	/*������� � ������� ��� year*/
	void setYear(int n);
	int getYear()const;
	/*��������� ����� � ������*/
	friend std::istream& operator >> (std::istream& in, Worker& t);
	friend std::ostream& operator <<(std::ostream& out, const Worker& t);
	Worker& operator =(const Worker& t);//��e����� ������������
};
