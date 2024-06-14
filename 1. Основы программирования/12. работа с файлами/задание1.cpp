#include <iostream>
#include <fstream>
#include <string.h>
int main() {
	std::ifstream file("in1.txt");
	while (file) {
		std::string f;
		file >> f;
		std::cout<<f<<"\n";
	}
}