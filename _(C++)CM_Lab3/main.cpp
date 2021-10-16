#include <iostream>
#include "scalarlib.h"

int main(void) {
	setlocale(LC_ALL, "");
	double * a = new double[5]{
		0, 0.06, 0.39, -0.41, -0.513
	};
	double * b = new double[5]{
		1.314, -1.314, 2.127, 1.427, 1.309
	};
	double * c = new double[5]{
		0.203, -0.069, 0.236, 0.55, 0
	};
	double * d = new double[5]{
		-7, 9, 3.142, 1, 7.69
	};
	std::cout << "Альфа: ";
	for (int i = 0; i < 5; i++) {
		std::cout << calca(a, b, c)[i] << ' ';
	}
	std::cout << std::endl;
	std::cout << "Бета: ";
	for (int i = 0; i < 5; i++) {
		std::cout << calcb(a, b, d)[i] << ' ';
	}
	std::cout << std::endl;
	std::cout << "Корни: ";
	for (int i = 0; i < 5; i++) {
		std::cout << "x" << i + 1 << " = " << calcRoot(d, a, b)[i] << ' ';
	}
	return 0;
}