#include "TradingPosition.h"
#include "Products.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

TradingPosition::TradingPosition(){}
void TradingPosition::setProduct(Products& other) {
	_product = other;
}
Products TradingPosition::getProduct() const{
	return _product;
}
void TradingPosition::setCount(int count) {
	_count = count;
}
int TradingPosition::getCount() const{
	return _count;
}
void TradingPosition::setDeadlineRealization(int deadlineRealization) {
	_deadlineRealization = deadlineRealization;
}
int TradingPosition::getDeadlineRealization() const{
	return _deadlineRealization;
}
void TradingPosition::setDeliveryPrice(int deliveryPrice) {
	
}
int TradingPosition::getDeliveryPrice() const{
	return _deliveryPrice;
}
bool TradingPosition::operator==(const TradingPosition& other) {
	return this->_count == other._count && this->_deadlineRealization == other._deadlineRealization
		&& this->_deliveryPrice == other._deliveryPrice && this->_product == other._product;
}
