#pragma once
#include "Products.h"


void print_prod(product &P) {

	std::cout << "�������� ������: " << P.name << "\n";
	std::cout << "���������� ������: " << P.number << " ��\n";
	std::cout << "���� �� �������: " << P.price << " ���.\n";
}

int full_price(product &P) {
	return P.number * P.price;

}

void sell(product &P, int minn) {
	int sum = P.number -= minn;
}




