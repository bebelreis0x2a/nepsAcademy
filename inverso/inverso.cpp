#include <iostream>
#include <list>

int main(){
	
	int a;
	std::list <int> valor(10);
	
	for(int i = 0; i < 10; i++){
		std::cin >> a;
		valor.push_front(a);	
	}

	for(int i = 0; i < 10; i++){
		std::cout << valor.front() << std::endl;
		valor.pop_front();
	}

	return 0;
}
