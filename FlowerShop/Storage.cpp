#include <iostream>
#include <string>
#include "Storage.h"
#include <vector>
#include <algorithm>

Storage::Storage() {}

void Storage::printStorage() {
	for (auto item : _storage) {
		std::cout << "Тип товара: " << item.getProduct().getType() << '\n';
		std::cout << "Название: " << item.getProduct().getName() << '\n';
		std::cout << "Вес: " << item.getProduct().getWeight() << '\n';
		std::cout << "Цвет: " << item.getProduct().getColor() << '\n';
		std::cout << "Количество товара: " << item.getCount() << "шт" << '\n';
		std::cout << "Срок реализации: " << item.getDeadlineRealization() << '\n';
		std::cout << "Цена поставки: " << item.getDeliveryPrice() << "руб" << "\n\n";
	}
}
void Storage::addPosition(TradingPosition other) {
	_storage.push_back(other);
}
void Storage::deletePosition(const TradingPosition& other) {
	auto place = std::find_if(
		_storage.begin(),
		_storage.end(),
		[other](const TradingPosition& tmp) {
			other.getCount() == tmp.getCount()
				&& other.getDeadlineRealization() == tmp.getDeadlineRealization()
				&& other.getDeliveryPrice() == tmp.getDeliveryPrice()
				&& other.getProduct() == tmp.getProduct();
		});
	if (place != _storage.end())
		_storage.erase(place);
}
TradingPosition Storage::getPosition(int pos){
		return _storage.at(pos);
}
bool Storage::checkPositions(Recept& other) {
	for (int i = 0; i < _storage.size(); i++)
		for (int j = 0; j < other.getReceptSize(); j++) {
			if (other.at(j).getProduct().getColor() != _storage.at(i).getProduct().getColor()
				&& other.at(j).getProduct().getName() != _storage.at(i).getProduct().getName()
				&& other.at(j).getProduct().getWeight() != _storage.at(i).getProduct().getWeight())
				return false;
		}
}
