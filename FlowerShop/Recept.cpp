#include <iostream>
#include <string>
#include "TradingPosition.h"
#include "Recept.h"
#include <algorithm>

Recept::Recept() {}

void Recept::printRecept() {
	int allPrice = 0;
	for (auto item : _recept) {
		std::cout << item.getProduct().getName() << "(" << item.getProduct().getColor() << "), "
			<< item.getCount() << " шт, " << item.getDeliveryPrice() << "руб\n";
	}
	std::cout << "\nОбщая цена: " << allPrice << '\n';
}
void Recept::addPosition(TradingPosition other) {
	_recept.push_back(other);
}
void Recept::deletePosition(const TradingPosition& other) {
	auto place = std::find_if(
		_recept.begin(),
		_recept.end(),
		[other](const TradingPosition& tmp) {
			other.getCount() == tmp.getCount()
				&& other.getDeadlineRealization() == tmp.getDeadlineRealization()
				&& other.getDeliveryPrice() == tmp.getDeliveryPrice()
				&& other.getProduct() == tmp.getProduct();
		});
	if (place != _recept.end())
		_recept.erase(place);
}
TradingPosition& Recept::at(int i) {
	return _recept[i];
}
int Recept::getReceptSize() {
	return _recept.size();
}