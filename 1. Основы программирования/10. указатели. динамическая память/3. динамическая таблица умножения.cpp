//Напишите четыре функции:
//create_two_dim_array: принимает на вход количество строк и столбцов. 
//Создаёт целочисленный двумерный динамический массив заданной размерности и возвращает указатель на него.
//fill_two_dim_array: принимает на вход указатель на двумерный целочисленный массив, количество строк и столбцов в нём. 
//Заполняет полученный массив значениями из таблицы умножения. Таблица не ограничена 10 строками или 10 столбцами. Не возвращает ничего.
//print_two_dim_array: принимает на вход указатель на двумерный целочисленный массив, количество строк и столбцов в нём. 
//Выводит полученный массив на консоль. Не возвращает ничего.
//delete_two_dim_array: принимает на вход указатель на двумерный целочисленный массив, количество строк и столбцов в нём. 
//Очищает полученный массив. Не возвращает ничего.
#include <iostream>

void fill_two_dim_array(int **ptr, const int rows, const int cols) {
	int n=0;
	for (int i=0; i<cols; ++i) {
		ptr[0][i]=n+1;
		n++;
	}
	n=1;
	for (int i=1; i<rows; ++i) {
		ptr[i][0]=n+1;
		n++;
	}
	for (int i=1; i<rows; ++i){
		for (int j=1; j<cols; ++j) {
			ptr[i][j]=ptr[0][j]*ptr[i][0];
		}
	}

}

void print_two_dim_array(int **ptr, const int rows, const int cols) {
	std::cout<<"Multiplication table: "<<std::endl;
	for (int i=0; i<rows; ++i) {
		for (int j=0; j<cols; ++j) {
			std::cout<<ptr[i][j]<<"\t";
		}
		std::cout<<std::endl;
	}
}

void delete_two_dim_array(int **ptr, const int rows, const int cols) {
	for (int i=0; i<rows; ++i) {
		delete[] ptr[i];
	}
	delete[] ptr;
}

int **create_two_dim_array(const int rows, const int cols) {
	int **ptr = new int*[rows];
	for (int i=0; i<rows; ++i) {
		ptr[i] = new int [cols];
	}
	return ptr;
}

int main() {
	int rows, cols;
	std::cout<<"Enter the number of rows: ";
	std::cin>>rows;
	std::cout<<"Enter the number of columns: ";
	std::cin>>cols;
	int **ptr=create_two_dim_array(rows, cols);
	fill_two_dim_array(ptr, rows, cols);
	print_two_dim_array(ptr, rows, cols);
	delete_two_dim_array(ptr, rows, cols);
	ptr=nullptr;
}
                
	