#pragma once
#include <string>

class Exception{
	std::string message;//сообщение исклюения
public:
	Exception(const std::string& message = "Exception");
	Exception(const Exception& e);
	~Exception();
	const std::string& what()const;//выводим сообщение исключения
};