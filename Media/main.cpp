#include <iostream>

int main(){
	int soma[2];

	for(int i = 0; i < sizeof(soma)/4; i++){
		std::cin >> soma[i];
	}

	std::cout << (soma[0] + soma[1])/2 << std::endl;

	return 0;
}
