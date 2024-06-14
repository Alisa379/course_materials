#include <iostream>

namespace sum {
	void calc(int x, int y) {
		std::cout<<"sum: "<<x+y<<std::endl;
	}
}
namespace subtraction {
	void calc(int x, int y) {
		std::cout<<"subtraction: "<<x-y<<std::endl;
	}
}
namespace multiplication {
	void calc(int x, int y) {
		std::cout<<"multiplication: "<<x*y<<std::endl;
	}
}
namespace division {
	void calc(int x, int y) {
		std::cout<<"division: "<<x/y<<std::endl;
	}
}
int main() {
	int x=6, y=9;
	std::cout<<"x = "<<x<<", y = "<<y<<std::endl;
	sum::calc(x, y);
	subtraction::calc(x, y);
	multiplication::calc(x, y);
	division::calc(x, y);
}
