//Напишите программу, которая запрашивает у пользователя целое число и выводит на экран таблицу умножения для этого числа.
#include <iostream> 
int main() {
	int n;
	std::cout<<"input an integer number \n";
	std::cin>>n;
	for (int i=1; i<=10; ++i) {
		std::cout<<n<<" * "<<i<<" = "<<n*i<<std::endl;
	}
}