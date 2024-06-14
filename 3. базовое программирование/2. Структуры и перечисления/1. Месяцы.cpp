
// Ќапишите программу, котора€ спрашивает у пользовател€ номер мес€ца и выводит на экран название мес€ца, введЄнного пользователем.

#include <iostream>

enum mounths {
	JANUARY = 1,
	FEBRUARY,
	MARCH,
	APRIL,
	MAY,
	JUNE,
	JULY,
	AUGUST,
	SEPTEMBER,
	OCTOBER,
	NOVEMBER,
	DECEMBER
};

int main() {
	int n;
	do {
		std::cout << "Insert mounth's number: ";
		std::cin >> n;
		mounths mn = static_cast<mounths>(n);
		
		switch(mn) {
			
			case JANUARY:
				std::cout << "JANUARY" << std::endl;
			break;
			
			case FEBRUARY:
				std::cout << "FEBRUARY" << std::endl;
			break;
			
			case MARCH:
				std::cout << "MARCH" << std::endl;
			break;
			
			case APRIL:
				std::cout << "APRIL" << std::endl;
			break;
			
			case MAY:
				std::cout << "MAY" << std::endl;
			break;
			
			case JUNE:
				std::cout << "JUNE" << std::endl;
			break;
			
			case JULY:
				std::cout << "JULY" << std::endl;
			break;
			
			case AUGUST:
				std::cout << "AUGUST" << std::endl;
			break;
			
			case SEPTEMBER:
				std::cout << "SEPTEMBER" << std::endl;
			break;
			
			case OCTOBER:
				std::cout << "OCTOBER" << std::endl;
			break;
			
			case NOVEMBER:
				std::cout << "NOVEMBER" << std::endl;
			break;
			
			case DECEMBER:
				std::cout << "DECEMBER" << std::endl;
			break;
			
			default:
				std::cout << "Wrong mounth's number!" << std::endl;
		}
			
	} while (n != 0);
	
	std::cout << "Goodbye!";
	
}