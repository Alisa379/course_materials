#include <iostream> 
void swap(int *a, int *b) {
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
}
int main(int argc, char** argv) {
	int a=5, b=8;
	int *a1=&a;
	int *b1=&b;
	std::cout<<"a = "<<a<<", "<<"b = "<<b<<std::endl;
	swap(a1, b1);
	std::cout<<"a = "<<a<<", "<<"b = "<<b;
}
