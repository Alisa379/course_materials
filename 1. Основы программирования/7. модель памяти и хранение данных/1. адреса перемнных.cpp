//В этом задании вы потренируетесь выводить адреса и размеры переменных
#include <iostream>
using std::cout, std::endl;
int main() {
	int a=23;
    short b=43;
	long c=34567890;
	long long d=-345678;
	float e=78.45;
	double f=465.87655;
	long double g=7384.43;
	bool h=0;
	cout<<"int: "<<&a<<" "<<sizeof(a)<<endl;
	cout<<"short: "<<&b<<" "<<sizeof(b)<<endl;
	cout<<"long: "<<&c<<" "<<sizeof(c)<<endl;
	cout<<"long long: "<<&d<<" "<<sizeof(d)<<endl;
	cout<<"float: "<<&e<<" "<<sizeof(e)<<endl;
	cout<<"double: "<<&f<<" "<<sizeof(f)<<endl;
	cout<<"long double: "<<&f<<" "<<sizeof(f)<<endl;
	cout<<"bool: "<<&h<<" "<<sizeof(h)<<endl;
}