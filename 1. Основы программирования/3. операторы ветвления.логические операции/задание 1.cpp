#include <iostream>
using std::cout;
int main() {
	cout<<std::boolalpha;
	cout<<"Operator: || \n";
	cout<<true<<"\t"<<true<<"\t"<<(true||true)<<"\n";
	cout<<false<<"\t"<<true<<"\t"<<(false||true)<<"\n";
	cout<<true<<"\t"<<false<<"\t"<<(true||false)<<"\n";
	cout<<false<<"\t"<<false<<"\t"<<(false||false)<<"\n";
	
	cout<<"Operator: && \n";
	cout<<true<<"\t"<<true<<"\t"<<(true&&true)<<"\n";
	cout<<false<<"\t"<<true<<"\t"<<(false&&true)<<"\n";
	cout<<true<<"\t"<<false<<"\t"<<(true&&false)<<"\n";
	cout<<false<<"\t"<<false<<"\t"<<(false&&false)<<"n";
}