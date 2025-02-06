#include <iostream>

int fib(int a);

int main(int argc, char *argv[]){
	
	int valor;

	std::cin >> valor;
	std::cout << fib(++valor) << std::endl;
	
	return 0;
}

int fib(int a){
	if(a == 0)
		return 0;
	if(a == 1 or a == 2)
		return 1;
	else
		return fib(a-1) + fib(a-2);
}
