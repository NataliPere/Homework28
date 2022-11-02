#pragma once
#include <iostream>
#include <string>

struct product {
	std::string name;
	unsigned int number = 0;
	unsigned int price;
};


void print_prod(product &P);

int full_price(product &P);

void sell(product &P, int minn);
