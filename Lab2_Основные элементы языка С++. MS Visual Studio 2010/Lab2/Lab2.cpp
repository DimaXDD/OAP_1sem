﻿#include <iostream>
void main()
{
	double y, r, a = 1.75, b = 4.5e-4;
	y = a * exp(-2 * b) - sqrt(1 + a);
	r = log(1 + 20 * b) / (1 + a);
	std::cout << "y = " << y << "\nr = " << r << std::endl;
}
