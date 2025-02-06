#include <iostream>
#include <vector>

int main(int argc, char *argv[]){
	
	std::vector<int> bebida(2);
	int bandejas, soma = 0;

	std::cin >> bandejas;

	for(int i = 0; i < bandejas; i++){
		std::cin >> bebida[0] >> bebida[1];
		
		if(bebida[0] > bebida[1]){
			soma += bebida[1];
		}
	}

	std::cout << soma << std::endl;

	return 0;
}
