#pragma once
#include "Products.h"


void print_prod(product &P) {

	std::cout << "Название товара: " << P.name << "\n";
	std::cout << "Количество товара: " << P.number << " кг\n";
	std::cout << "Цена за единицу: " << P.price << " руб.\n";
}

int full_price(product &P) {
	return P.number * P.price;

}

void sell(product &P, int minn) {
	int sum = P.number -= minn;
}




