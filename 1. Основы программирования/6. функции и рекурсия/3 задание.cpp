#include <iostream>
long long the_Latest=0, last=0, result=0, count=0;
void FIB(long long amount) {
	amount-=1;
	if (amount >= 0) {
		if (count==0) {
			std::cout<<0<<" ";
			count+=1;
			amount-=1;
		}
		result=the_Latest+last;
		if (the_Latest==0 && last==0) {
			result=1;
		}
		std::cout<<result<<" ";
		the_Latest=last;
		last=result;
		FIB(amount); 	
	}
}

int main() {
	long long number;
	std::cout<<"Input a number: ";
	std::cin>>number;
	FIB(number);
}