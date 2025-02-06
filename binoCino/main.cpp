#include <iostream>
#include <vector>

int main(int argc, char *argv[]){
	
	std::vector<int>valor(2);
	std::string ganhador;

	std::cin >> valor[0] >> valor[1];

	ganhador = ((valor[0] + valor[1])%2 == 0) ? "Bino" : "Cino";

	std::cout << ganhador << std::endl;

	return 0;
}
