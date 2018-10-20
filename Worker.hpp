#pragma once
#include <string>
#include <iostream>
#include "Exception.hpp"

class Worker{
	std::string surname;//�������
	std::string init;//��������
	int year;//��� ���������� �� ������
	
public:
	Worker(const std::string surname = "", const std::string init = "", int year = 0);
	Worker(const Worker& w);
	~Worker();
	/*������� � ������� ��� surname*/
	void setSurname(const std::string& str);
	const std::string& getSurname() const;
	/*������� � ������� ��� init*/
	void setInit(const std::string& str);
	const std::string& getInit()const;
	/*������� � ������� ��� year*/
	void setYear(int n);
	int getYear()const;

};													  