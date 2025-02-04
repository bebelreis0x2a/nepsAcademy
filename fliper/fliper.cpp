#include <iostream>

int main(){
	int porta[2];

	for(int i = 0; i < sizeof(porta)/4; i++){
		std::cin >> porta[i];
	}

	if(porta[0] == 0){
		std::cout << "C" << std::endl;
	}else{
		if(porta[1] == 0){
			std::cout << "B" << std::endl;
		}else{
			std::cout << "A" << std::endl;
		}
	}
}
