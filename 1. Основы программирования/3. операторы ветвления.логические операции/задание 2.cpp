#include <iostream>
using std::cin, std::cout;
int main() {
	int a1, a2, a3; 
	cout<<"Input the first integer number:  ";
	cin>>a1;
	cout<<"Input the second integer number:  ";
	cin>>a2;
	cout<<"Input the third integer number:  ";
	cin>>a3;
	int first=a1, second=a2, third=a3;
	second>=third? (first>=second? (first=first): (first>=third? (first=a2, second=a1): (first=a2, second=a3, third=a1))): (first>=third?(second=a3, third=a2):(first>=second?(first=a3, second=a1, third=a2):(first=a3, third=a1)));
	cout<<first<<"\t"<<second<<"\t"<<third; 
}