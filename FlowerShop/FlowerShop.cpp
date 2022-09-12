#include "FlowerShop.h"
#include <iostream>
#include <string>

Colors FlowerShop::getColors() {
	return _colors;
}

Flowers FlowerShop::getFlowers() {
	return _flowers;
}

Products FlowerShop::getProducts() {
	return _products;
}

Storage FlowerShop::getStorage() {
	return _storage;
}

Recept FlowerShop::getRecept() {
	return _recept;
}

SafetySystem FlowerShop::getSafetySystem() {
	return _safetySystem;
}

TradingPosition FlowerShop::getTradingPosition() {
	return _tradingPosition;
}

Worker FlowerShop::getWorker() {
	return _worker;
}