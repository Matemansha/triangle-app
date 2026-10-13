#include "typebyangles.h"

std::string typeByAngles(double a, double b, double c) {
	double a2 = a * a, b2 = b * b, c2 = c * c;
	double max2 = a2, sum2 = b2 + c2;
	if (b2 > max2) { max2 = b2; sum2 = a2 + c2; }
	if (c2 > max2) { max2 = c2; sum2 = a2 + b2; }

	if (max2 == sum2)
		return "прямоугольный";
	if (max2 < sum2)
		return "остроугольный";
	return "тупоугольный";
}