#include <iostream>
#include <vector>

int main(int argc, char *argv[]){

	int n;
	char g, a;
	std::vector<char> gabarito;
	std::vector<char> aluno;

	std::cin >> n;

	for(int i = 0; i < n; i++){
		std::cin >> g;
		gabarito.push_back(g);
	}

	for(int i = 0; i < n; i++){
		std::cin >> a;
		aluno.push_back(a);
	}

	n = 0;

	for(int i = 0; i < gabarito.size(); i++){
		if(gabarito[i] == aluno[i]){
			n++;
		}	
	}
	
	std::cout << n << std::endl;

	return 0;
}
