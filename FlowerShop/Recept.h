#pragma once
#include "TradingPosition.h"
#include <iostream>
#include <string>
#include <vector>

class Recept: public TradingPosition {
public:
	Recept();

	void printRecept();
	void addPosition(TradingPosition other);
	void deletePosition(const TradingPosition& other);
	TradingPosition& at(int i);
	int getReceptSize();

private:
	std::vector<TradingPosition> _recept;
};
