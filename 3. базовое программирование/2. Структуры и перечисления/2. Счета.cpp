// �������� ��������� ��� �������� ���������� � ���������� �����. ��� ������ ������� ����� ����� (����� �����), ��� ��������� (������) � ���������� ����� �� ����� (������� �����).
// �������� ������� ��� ��������� ������� �����. ������� ������ ��������� ��������� ��������� ����������� ����� � ����� �����.
// ��������� ������������ ��������� ���� ���������� ���������, �������� ����� ������ ����� � �������� ���������� ��������� ��������� �� �������.

#include <iostream>
#include <cstring>

struct accounts {
	int number;
	std::string name;
	float money;
};

void recount(accounts *acc, float balance) {
	acc -> money = balance;
}

int main() {
	accounts acc;
	float balance;
	std::cout << "Insert bank account number: ";
	std::cin >> acc.number;
	std::cout << std::endl << "Insert owner's name: ";
	std::cin >> acc.name;
	std::cout << std::endl << "Insert balance: ";
	std::cin >> acc.money;
	std::cout << std::endl << "Insert new balance: ";
	std::cin >> balance;
	recount(&acc, balance);
	std::cout << std::endl << "Your account: " << acc.name << ", " << acc.number << ", " << acc.money;
}