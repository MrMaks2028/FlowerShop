#pragma once
#include "Products.h"
#include <iostream>
#include <string>

class TradingPosition {
public:
	TradingPosition();
	void setProduct(Products& other);
	Products getProduct() const;
	void setCount(int count);
	int getCount() const;
	void setDeadlineRealization(int deadlineRealization);
	int getDeadlineRealization() const;
	void setDeliveryPrice(int deliveryPrice);
	int getDeliveryPrice() const;
	bool operator==(const TradingPosition& other);

private:
	Products _product;
	int _count = 0;
	int _deadlineRealization = 0;
	int _deliveryPrice = 0;
};