#pragma once
#include "Colors.h"
#include "Flowers.h"
#include "Products.h"
#include "Recept.h"
#include "SafetySystem.h"
#include "Storage.h"
#include "TradingPosition.h"
#include "Worker.h"
#include <iostream>
#include <string>
#include <vector>

class FlowerShop {
public:
	Colors getColors();
	Flowers getFlowers();
	Products getProducts();
	SafetySystem getSafetySystem();
	Storage getStorage();
	Recept getRecept();
	TradingPosition getTradingPosition();
	Worker getWorker();

private:
	Colors _colors;
	Flowers _flowers;
	Products _products;
	SafetySystem _safetySystem;
	Storage _storage;
	Recept _recept;
	TradingPosition _tradingPosition;
	Worker _worker;
	
};