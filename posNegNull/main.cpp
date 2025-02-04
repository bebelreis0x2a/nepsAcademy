#include <iostream>

int main(){
	int valor;
	std::string resposta;

	std::cin >> valor;

	resposta = (valor == 0)? "nulo":
		   (valor > 0 )? "positivo":
		   		 "negativo";

	std::cout << resposta << std::endl;
}
