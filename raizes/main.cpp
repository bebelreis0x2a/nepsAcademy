#include <iostream>
#include <math.h>
#include <iomanip>

int main(int argc, char *argv[]){

	int a;
	double raizes;

	std::cin >> a;

	for(int i = 0; i < a; i++){
		std::cin >> raizes;
		std::cout << std::fixed << std::setprecision(4) << sqrt(raizes)  << std::endl;
	}

	return 0;
}
