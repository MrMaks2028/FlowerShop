#pragma once
#include "TradingPosition.h"
#include "Recept.h"
#include <iostream>
#include <string>
#include <vector>

class Storage: TradingPosition {
public:
	Storage();

	void printStorage();
	void addPosition(TradingPosition other);
	void deletePosition(const TradingPosition& other);
	TradingPosition getPosition(int pos);
	bool checkPositions(Recept &other);

private:
	std::vector<TradingPosition> _storage;
};
