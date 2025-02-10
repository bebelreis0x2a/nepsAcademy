#include <iostream>
#include <vector>

int main(int argc, char *argv[]){

	int contador, valor, resultado = 0;
	std::vector<int> n;

	std::cin >> contador;

	for(int i = 0; i < contador; i++){
		std::cin >> valor;
		n.push_back(valor);
	}
	
	for(int i = 0; i < n.size(); i++){
		if(i < n.size()-2){
			if(n[i] == 1 and n[i+1] == 0 and n[i+2] == 0){
				resultado +=1;
			}
		}
	}

	std::cout << resultado << std::endl;

	return 0;
}
