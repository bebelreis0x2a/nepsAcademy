#include <iostream>
#include <list>

int main(int argc, char *argv[]){
	
	int valor;
	std::cin >> valor;

	std::list<int> lista;

	for(int i = 1; i <= valor; i++){
		if(valor%i == 0){
			lista.push_back(i); 
		}
	}

	while(!lista.empty()){
		std::cout << lista.front() << " ";
		lista.pop_front();
	}
	std::cout << std::endl;

	return 0;
}
