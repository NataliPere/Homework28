#include <iostream>
#include "Products.h"


int main() {
	setlocale(LC_ALL, "Russian");
	
	product p1;
	p1.name = "Томаты";
	p1.number = 10;
	p1.price = 115;
	
	product p2;
	p2.name = "Картофель";
	p2.number = 15;
	p2.price = 65;

	product p3;
	p3.name = "Огурцы";
	p3.number = 25;
	p3.price = 95;

	// Задача 1. Вывод информации об объекте.
	std::cout << "Задача 1.\n";
	std::cout << "\n";
	print_prod(p1);
	std::cout << "---------------------------------";
	std::cout << "\n";
	print_prod(p2);
	std::cout << "---------------------------------";
	std::cout << "\n";
	print_prod(p3);
	std::cout << "---------------------------------";
	std::cout << "\n\n";

	// Задача 2. Вывод стоимости всех товаров.
	std::cout << "Задача 2.\n";
	std::cout << "\n";
	std::cout << "Продукт: " << p1.name << " были закуплены на: " << full_price(p1) << " руб.\n\n";
	std::cout << "Продукт: " << p2.name << " был закуплен на: " << full_price(p2) << " руб.\n\n";
	std::cout << "Продукт: " << p3.name << " были закуплены на: " << full_price(p3) << " руб.\n\n";
	std::cout << "\n";

	
	// Задача 3. Снижение количества товара.
	int n = 5;

	std::cout << "Задача 3.\n";
	std::cout << "\n";
	sell(p1, n);
	sell(p2, n);
	sell(p3, n);

	std::cout << p1.name << " - снизили кол-во товара на: " << n << " кг.\nНовое кол-во: " << p1.number << " кг.\n\n";
	std::cout << p2.name << " - снизили кол-во товара на: " << n << " кг.\nНовое кол-во: " << p2.number << " кг.\n\n";
	std::cout << p3.name << " - снизили кол-во товара на: " << n << " кг.\nНовое кол-во: " << p3.number << " кг.\n\n";

	return 0;
}