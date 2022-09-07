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
	Storage getStorage();

private:
	
	Storage _storage;
	
};