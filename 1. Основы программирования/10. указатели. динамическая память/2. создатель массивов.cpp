//�������� ������� create_array, ������� ��������� �� ���� ������ �������, 
//������ ������ ���� ������������ ������ ��� �������� ���� double, 
//�������������� ��� ������ � ���������� ���������� �������. 
//����������� ��� ������� ��� �������� �������. 
//��������� � ������������ ������ ������� � �������� �� ������� ������������ ������. � ����� �� �������� �������� ������.
#include <iostream>
double *creat_array(int size) {
	double *db_ptr = new double[size]{};
	return db_ptr;
}
int main() {
	int size;
	std::cout<<"input size of the array: ";
	std::cin>>size;
	double *db_ptr = creat_array(size);
	std::cout<<"The array: ";
	for (int i=0; i<size; ++i) {
		std::cout<<db_ptr[i]<<" ";
	}
	delete[] db_ptr;
}
