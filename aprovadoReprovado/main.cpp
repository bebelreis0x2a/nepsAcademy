#include <iostream>
#include <vector>

int main(int argc, char *argv[]){

	std::vector<float> notas(2);
	std::string situacao;

	for(int i = 0; i < notas.size(); i++){
		std::cin >> notas[i];		
	}

	situacao = (((notas.at(0) + notas.at(1))/2) >= 7) ? "Aprovado" :
		   (((notas.at(0) + notas.at(1))/2) >= 4) ? "Recuperacao" : "Reprovado";	
	
	std::cout << situacao << std::endl;

	return 0;
}
