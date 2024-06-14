#include <iostream>
int fun (int value, int power, int result) {
	for (int i=0; i<power; ++i) {
		result*=value;
	}
	return result;
}

int main(int argc, char** argv) {
	std::cout<<5<<" in power "<<2<<" = "<<fun(5, 2, 1)<<std::endl;
	std::cout<<3<<" in power "<<3<<" = "<<fun(3, 3, 1)<<std::endl;
	std::cout<<4<<" in power "<<4<<" = "<<fun(4, 4, 1)<<std::endl;
}

