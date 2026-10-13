#include <iostream>
#include "istriangle.hpp"

int main() {
	double a, b, c;
	std::cout << "Введите стороны: ";
	std::cin >> a >> b >> c;
	std::cout << a << " " << b << " " << c << std::endl;
   if (isTriangle(a, b, c)) {
		std::cout << "Треугольник существует" << std::endl;
		std::cout << "Периметр равен " << perimeter(a, b, c) << std::endl;
	} else {
		std::cout << "Треугольник не существует" << std::endl;
	}
	return 0;
}