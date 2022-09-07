#include "Colors.h"
#include <iostream>
#include <string>
#include <vector>

Colors::Colors() {}

std::string Colors::getColor(int pos) {
	return _colors[pos];
}
