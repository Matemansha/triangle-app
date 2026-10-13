#include <iostream>
#include "istriangle.hpp"
#include "perimeter.hpp"
#include "area.hpp"
#include "typebysides.hpp"
#include "typebyangles.hpp"

int main() {
	double a, b, c;
	std::cout << "Введите стороны: ";
	std::cin >> a >> b >> c;
	std::cout << a << " " << b << " " << c << std::endl;
   if (isTriangle(a, b, c)) {
		std::cout << "Треугольник существует" << std::endl;
		std::cout << "Периметр равен " << perimeter(a, b, c) << std::endl;
        std::cout << "Площадь равна " << area(a, b, c) << std::endl;
		std::cout << "Треугольник существует, он "
		          << typeBySides(a, b, c) << "(" << typeByAngles(a, b, c)<< ")" << std::endl;
	} else {
		std::cout << "Треугольник не существует" << std::endl;
	}
	return 0;
}