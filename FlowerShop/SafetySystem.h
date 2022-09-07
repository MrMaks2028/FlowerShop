#pragma once
#include "Worker.h"
#include <iostream>
#include <string>
#include <vector>

class SafetySystem {
public:
	SafetySystem();
	void setWorkerList();
	void getWorkerList();
	void addWorker(Worker other);
	static void workersCountUp();
private:
	std::vector<Worker> _workerList;
};
