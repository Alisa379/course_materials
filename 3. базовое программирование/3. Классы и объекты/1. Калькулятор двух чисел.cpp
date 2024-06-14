// В этом задании вам нужно будет создать класс, выполняющий простые арифметические операции для двух чисел, и продемонстрировать его работу

#include <iostream>

class Calculator {
	private:
		double num1;
		double num2;
		
	public:
		double add(double num1, double num2) {
			return (num1 + num2);
		}
		double multipy(double num1, double num2) {
			return (num1 * num2);
		}
		double subtract_1_2(double num1, double num2) {
			return (num1 - num2);
		}
		double subtract_2_1(double num1, double num2) {
			return (num2 - num1);
		}
		double divide_1_2(double num1, double num2) {
			return (num1 / num2);
		}
		double divide_2_1(double num1, double num2) {
			return (num2 / num1);
		}
		
		bool set_num1(double num1) {
			if (num1 != 0) {
				this -> num1 = num1;
				return 1;
			}
			else {
				return 0;
			}
		}
		bool set_num2(double num2) {
			if (num2 != 0) {
				this -> num2 = num2;
				return 1;
			}
			else {
				return 0;
			}
		}
};

int main() {
	bool a = 1;
	double  num1, num2;
	Calculator calc;
	do {
		std::cout << "Input num1: ";
		std::cin >> num1;
		while (!(calc.set_num1(num1))) {
			std::cout << "Wrong input!" << std::endl << "Input num1: ";
			std::cin >> num1;
		}
		std::cout << "Input num2: ";
		std::cin >> num2;
		while (!(calc.set_num2(num2))) {
			std::cout << "Wrong input!" << std::endl << "Input num2: ";
			std::cin >> num2;
		}
		std::cout << "num1 + num2 = " << calc.add(num1, num2) << std::endl;
		std::cout << "num1 - num2 = " << calc.subtract_1_2(num1, num2) << std::endl;
		std::cout << "num2 - num1 = " << calc.subtract_2_1(num1, num2) << std::endl;
		std::cout << "num1 * num2 = " << calc.multipy(num1, num2) << std::endl;
		std::cout << "num1 / num2 = " << calc.divide_1_2(num1, num2) << std::endl;
		std::cout << "num2 / num1 = " << calc.subtract_2_1(num1, num2) << std::endl;
		std::cout << "In case you want to continue insert \"1\", but if you want to end up insert \"0\"  ";
		std::cin >> a;
	} while (a == 1 );
	std::cout << "Goodbye!";
}