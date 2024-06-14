#include <iostream>
#include <string.h>
using std::cin, std::cout;
int main() {
	std::string gender, zodiakSign;
	int age;
	cout<<"Enter your gender:  ";
	cin>>gender;
	cout<<"\n";
	cout<<"Enter your sign of zodiak:  ";
	cin>>zodiakSign;
	cout<<"\n";
	cout<<"Enter your age:  ";
	cin>>age;
	cout<<"\n";
	if ((gender=="m")&&(age<40)&&((zodiakSign=="cancer")||(zodiakSign=="scorpio")||(zodiakSign=="pisces"))) { 
		cout<<"Today is a very fruitful day. You can achieve what previously seemed almost impossible!\n";
		return 0;
	}
	if ((gender=="w")&&(15<=age && age <=30)&&((zodiakSign=="taurus")||(zodiakSign=="virgo")||(zodiakSign=="capricorn"))) {
		cout<<"Tonight is suitable for chatting with friends, holding home holidays and impromptu parties.It will be not only fun, but also interesting: there is a business that will captivate everyone.!\n";
		return 0;
	}
	cout<<"The horoscope for you is in development. Come back a little later ;)\n";
}
