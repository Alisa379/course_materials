//Создайте структуру для хранения адреса. Структура должна содержать название страны, города, улицы, номер дома, номер квартиры и индекс.
//Создайте функцию для вывода структуры на консоль.
//Протестируйте созданную функцию. Создайте в коде экземпляры структуры, передайте их в функцию и выведите на консоль получившиеся экземпляры структуры.

#include <iostream>
#include <cstring>

struct address {
	std::string cuntry;
	std::string city;
	std::string street;
	int house;
	int flat;
	int index;
};

void output(address &ad) {
	std::cout << "City: " << ad.city << std::endl;
	std::cout << "Street: " << ad.street << std::endl;
	std::cout << "House's number: " << ad.house << std::endl;
	std::cout << "Flat's number: " << ad.flat << std::endl;
	std::cout << "Index: " << ad.index << std::endl << std::endl;
}

int main() {
	address ad1;
	address ad2;
	ad1.city = "Moscow";
	ad1.street = "Arbat";
	ad1.house = 12;
	ad1.flat = 8;
	ad1.index = 123456;
	ad2.city = "Izevsk";
	ad2.street = "Pushkina";
	ad2.house = 59;
	ad2.flat = 143;
	ad2.index = 953769;
	output(ad1);
	output(ad2);
}