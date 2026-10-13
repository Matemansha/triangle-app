#include "typebysides.hpp"

std::string typeBySides(double a, double b, double c) {
	if (a == b && b == c)
		return "равносторонний";
	if (a == b || b == c || a == c)
		return "равнобедренный";
	return "разносторонний";
}