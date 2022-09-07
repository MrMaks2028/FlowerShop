#include "Worker.h"
#include "SafetySystem.h"
#include <iostream>
#include <string>

Worker::Worker() {}
Worker::Worker(
	int passportNum, 
	std::string surname,
	std::string name,
	std::string patronymic, 
	std::string login){
		_passportNum = passportNum,
		_surname = surname,
		_name = name,
		_patronymic = patronymic,
		_login = login;
}
void Worker::setPassportNum(int passportNum){
	_passportNum = passportNum;
}
int Worker::getPassportNum(){
	return _passportNum;
}
void Worker::setSurname(std::string surname){
	_surname = surname;
}
std::string Worker::getSurname(){
	return _surname;
}
void Worker::setName(std::string name){
	_name = name;
}
std::string Worker::getName(){
	return _name;
}
void Worker::setPatronymic(std::string patronymic){
	_patronymic = patronymic;
}
std::string Worker::getPatronymic(){
	return _patronymic;
}
std::string Worker::getFullName(){
	return _surname + " " + _name + " " + _patronymic;
}
void Worker::setLogin(int login){
	_login = login;
}
std::string Worker::getLogin(){
	return _login;
}
//bool Worker::checkRegistryData(){
//	
//}