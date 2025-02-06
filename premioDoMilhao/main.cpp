#include <iostream>

int main(int argc, char *argv[]){
	
	int dias, valor, resultado, soma = 0;

	std::cin >> dias;

	for (int i = 0; i < dias; i++){
		std::cin >> valor;
		if(soma < 1000000){
			soma += valor;
			if(soma >= 1000000){
				resultado = i;
			}
		}
	}

	std::cout << resultado + 1 << std::endl; 

	return 0;
}
