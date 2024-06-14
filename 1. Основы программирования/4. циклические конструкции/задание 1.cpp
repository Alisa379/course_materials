#include <iostream>
int main() {
   int a, sum=0;
   do {
   	std::cout<<"Input an integer number or nember \"0\" to end up  \n";
   	std::cin>>a;
   	sum=sum+a;
   } while (a!=0);
   std::cout<<sum;
}