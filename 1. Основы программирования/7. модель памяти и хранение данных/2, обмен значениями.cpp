#include <iostream> 
void swap(int &a, int &b) {
	a=a+b;
	b=a-b;
	a=a-b;
}
int main(int argc, char** argv) {
	int a=5, b=8;
	std::cout<<"a = "<<a<<", "<<"b = "<<b<<std::endl;
	swap(a, b);
	std::cout<<"a = "<<a<<", "<<"b = "<<b;
}