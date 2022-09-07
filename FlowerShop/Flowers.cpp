#pragma once
#include "Flowers.h"
#include <iostream>
#include <string>
#include <vector>

Flowers::Flowers(){}

std::string Flowers::getFlower(int pos) {
	return _flowers[pos];
}
std::vector<std::string> Flowers::getFlowers() {
	return _flowers;
}