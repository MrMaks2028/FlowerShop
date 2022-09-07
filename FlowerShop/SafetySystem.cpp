#include "SafetySystem.h"
#include "Worker.h"
#include <iostream>
#include <string>
#include <vector>

SafetySystem::SafetySystem(){}
void SafetySystem::setWorkerList(){
	
}
void SafetySystem::getWorkerList(){
	std::cout << "Список работников: \n";
	for (int i = 0; i < _workerList.size(); i++) {
		std::cout << "Номер паспорта - " 
		<< _workerList[i].getPassportNum() << '\n';
		std::cout << "ФИО - " 
		<< _workerList[i].getFullName() << '\n';
		std::cout << "Логин - "
		<< _workerList[i].getLogin() << "\n\n";
	}
}
void SafetySystem::addWorker(Worker other) {
	_workerList.push_back(other);
}
void SafetySystem::workersCountUp() {
	static int _workersCount;
	_workersCount++;
}