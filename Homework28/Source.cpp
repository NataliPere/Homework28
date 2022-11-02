#include <iostream>
#include "Products.h"


int main() {
	setlocale(LC_ALL, "Russian");
	
	product p1;
	p1.name = "������";
	p1.number = 10;
	p1.price = 115;
	
	product p2;
	p2.name = "���������";
	p2.number = 15;
	p2.price = 65;

	product p3;
	p3.name = "������";
	p3.number = 25;
	p3.price = 95;

	// ������ 1. ����� ���������� �� �������.
	std::cout << "������ 1.\n";
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

	// ������ 2. ����� ��������� ���� �������.
	std::cout << "������ 2.\n";
	std::cout << "\n";
	std::cout << "�������: " << p1.name << " ���� ��������� ��: " << full_price(p1) << " ���.\n\n";
	std::cout << "�������: " << p2.name << " ��� �������� ��: " << full_price(p2) << " ���.\n\n";
	std::cout << "�������: " << p3.name << " ���� ��������� ��: " << full_price(p3) << " ���.\n\n";
	std::cout << "\n";

	
	// ������ 3. �������� ���������� ������.
	int n = 5;

	std::cout << "������ 3.\n";
	std::cout << "\n";
	sell(p1, n);
	sell(p2, n);
	sell(p3, n);

	std::cout << p1.name << " - ������� ���-�� ������ ��: " << n << " ��.\n����� ���-��: " << p1.number << " ��.\n\n";
	std::cout << p2.name << " - ������� ���-�� ������ ��: " << n << " ��.\n����� ���-��: " << p2.number << " ��.\n\n";
	std::cout << p3.name << " - ������� ���-�� ������ ��: " << n << " ��.\n����� ���-��: " << p3.number << " ��.\n\n";

	return 0;
}