
// ������: �������������� � ����������� ������, ����������� ���������� �������. ����������������� �� ������: �������� �� ������ ���������� ������� ������ � �������� ���������� � ���������� ��� ������ �� �������.

#include <iostream>

class Figure {
	public:
		int sides;
		Figure() {
			sides = 0;
		}
};

class Triangle : public Figure {
	public:
		Triangle() {
			sides = 3;
		}
};

class Quadrilateral : public Figure {
	public:
		Quadrilateral() {
			sides = 4;
		}
};

int main(int argc, char** argv) {
	Figure f1;
	Triangle f2;
	Quadrilateral f3;
	std::cout << "Amount of sides: " << "\n" << "Figure: " << f1.sides << std::endl;
	std::cout << "Triangle: " << f2.sides << std::endl;
	std::cout << "Triangle: " << f3.sides << std::endl;
}