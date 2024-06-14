//5 + 10 = 15
//5 - 10 = -5
//5 * 10 = 50
//5 / 10 = 0.5
#include <iostream>
void sum(int a, int b) {
	std::cout<<a<<"+"<<b<<"="<<a+b<<std::endl;
}
void subtraction(int a, int b) {
	std::cout<<a<<"-"<<b<<"="<<a-b<<std::endl;
}
void multiplication(int a, int b) {
	std::cout<<a<<"*"<<b<<"="<<a*b<<std::endl;
}
void division(double a, double b) {
	std::cout<<a<<"/"<<b<<"="<<a/b<<std::endl;
}

int main(int arcg, char**argv) {
	int a, b;
	std::cin>>a>>b;
	sum(a, b);
	subtraction(a, b);
	multiplication(a, b);
	division(a, b);
}