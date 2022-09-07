#pragma once
#include <iostream>
#include <string>

class Products {
public:
	Products();
	Products(std::string name, int weight, std::string color, std::string type);

	void setName(std::string name);
	std::string getName() const;
	void setWeight(int weight);
	int getWeight() const;
	void setColor(std::string color);
	std::string getColor() const;
	void setType(std::string type);
	std::string getType() const;
	bool operator==(const Products& other);

private:
	std::string _name;
	int _weight = 0;
	std::string _color;
	std::string _type;
};