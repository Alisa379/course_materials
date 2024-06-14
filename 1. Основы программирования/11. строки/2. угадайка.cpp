#include <iostream>
#include <string>
int main() {
	int n=1;
	std::string str = "apple", str1;
	std::cout<<"Guess the word: ";
	std::cin>>str1;
	n = str.compare(str1);
	while (n!=0) {
		std::cout<<"Wrong"<<std::endl;
		std::cout<<"Guess the word: ";
		std::cin>>str1;
		n = str.compare(str1);
	}
	std::cout<<"That's right! You won! Åğó hidden word is "<<str;
}