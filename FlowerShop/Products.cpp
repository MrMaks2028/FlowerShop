#include "Products.h"
#include <iostream>
#include <string>

Products::Products() {}
void Products::setName(std::string name) {
	_name = name;
}
Products::Products(std::string name, int weight, std::string color, std::string type) {
	_name = name;
	_weight = weight;
	_color = color;
	_type = type;
}

std::string Products::getName() const{
	return _name;
}
void Products::setWeight(int weight) {
	_weight = weight;
}
int Products::getWeight() const {
	return _weight;
}
void Products::setColor(std::string color) {
	_color = color;
}
std::string Products::getColor() const {
	return _color;
}
void Products::setType(std::string type) {
	_type = type;
}
std::string Products::getType() const {
	return _type;
}
bool Products::operator==(const Products& other) {
	return this->_color == other._color && this->_name == other._name &&
		this->_weight == other._weight && this->_type == other._type;
}
