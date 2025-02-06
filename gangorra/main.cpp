#include <iostream>
#include <vector>

int main(int argc, char *argv[]){
	
	std::vector<int> peso(2);
	std::vector<int> comprimento(2);

	std::cin >> peso[0] >> comprimento[0]
	    	 >> peso[1] >> comprimento[1];
	
	if((peso[0]*comprimento[0]) == (peso[1]*comprimento[1])){
		std::cout << 0 << std::endl;
	}else if((peso[0]*comprimento[0]) < (peso[1]*comprimento[1])){
		std::cout << 1 << std::endl;
	}else{
		std::cout << -1 << std::endl;
	}

	
	return 0;
}
