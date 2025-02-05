#include <iostream>
#include <vector>
int main(int argc, char *argv[]){
	
	std::vector<int> lampada(2);
	int loop, estado;

	lampada.at(0) = 0;
	lampada.at(1) = 0;

	std::cin >> loop;

	for (int i = 0; i < loop; i++){
		std::cin >> estado;
		if(estado == 1){
			if(lampada[0] == 0) lampada[0] = 1;
			else lampada[0] = 0;
		}else{
			if(lampada[0] == 0 and lampada[1] == 0){
				lampada[0] = 1;		
				lampada[1] = 1;	
			}else if(lampada[0] == 1 and lampada[1] == 1){
				lampada[0] = 0;		
				lampada[1] = 0;	
			}else{
				std::swap(lampada.at(0), lampada.at(1));		
			}
				
		}
		
	}	

	std::cout << lampada.at(0) << std::endl << lampada.at(1) << std::endl;

	return 0;
}
