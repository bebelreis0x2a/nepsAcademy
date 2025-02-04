#include <iostream>

int main(){
	int porta[2];

	for(int i = 0; i < sizeof(porta)/4; i++){
		std::cin >> porta[i];
	}

	if(porta[0] + porta[1] > 50){
		std::cout << "N" << std::endl;
	}else{
		std::cout << "S" << std::endl;
	}
}
