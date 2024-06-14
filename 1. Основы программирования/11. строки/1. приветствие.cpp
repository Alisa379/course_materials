#include <iostream>
#include <string>
int main() {
	std::string name, surname;
	std::cout<<"Insert your name: ";
	std::cin>>name;
	std::cout<<"Insert your surname: ";
	std::cin>>surname;
	std::cout<<"Hello, "<<name<<" "<<surname<<"!";
}