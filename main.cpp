#include <iostream>
#include "istriangle.hpp"
#include "typebysides.hpp"

int main() {
	double a, b, c;
	std::cout << "Введите стороны: ";
	std::cin >> a >> b >> c;
	std::cout << a << " " << b << " " << c << std::endl;
   if (isTriangle(a, b, c)) {
		std::cout << "Треугольник существует, он "
		          << typeBySides(a, b, c) << std::endl;
	} else {
		std::cout << "Треугольник не существует" << std::endl;
	}
	return 0;
}