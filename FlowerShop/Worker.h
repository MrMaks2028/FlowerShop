#pragma once
#include <iostream>
#include <string>

class Worker {
public:
	Worker();
	Worker(int passportNum, std::string surname, std::string name,
		std::string patronymic, std::string login);

	void setPassportNum(int passportNum);
	int getPassportNum();
	void setSurname(std::string surname);
	std::string getSurname();
	void setName(std::string name);
	std::string getName();
	void setPatronymic(std::string patronymic);
	std::string getPatronymic();
	std::string getFullName();
	void setLogin(int login);
	std::string getLogin();
	/*bool checkRegistryData();*/

private:
	int _passportNum = 0;
	std::string _surname;
	std::string _name;
	std::string _patronymic;
	std::string _login;
};
