#include <iostream>
#include <iomanip>
#include <vector>

double divisao(std::vector<double> valor);

int main(int argc, char *argv[]){
	
	std::vector<double> valor(2);

	std::cin >> valor[0] >> valor[1];
	
	std::cout << std::fixed << std::setprecision(2) << divisao(valor) << std::endl;

	return 0;
}

double divisao(std::vector<double> valor){
	return valor[0]/valor[1];
}
