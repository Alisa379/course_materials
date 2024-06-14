#include <iostream>
int main() {
	int a, sum=0;
	std::cout<<"input an unteger number \n";
	std::cin>>a;
	while (a) {
		sum=sum+a%10;
		a/=10;
	}
	std::cout<<sum;
}