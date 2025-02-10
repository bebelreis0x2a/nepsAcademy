#include <iostream>
#include <iomanip>
#include <math.h>

int main(int argc, char *argv[]){
	
	double a, b;

	std::cin >> a >> b;

	auto potencia  = [=]()->double{
		return pow(a, b);
	};

	std::cout << std::fixed << std::setprecision(4) << potencia() << std::endl;

	return 0;
}

