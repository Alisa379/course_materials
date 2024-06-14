
//Задача: спроектировать и реализовать классы, описывающие предметную область. 
//Продемонстрируйте их работу: создайте по одному экземпляру каждой фигуры и выведите на экран информацию о длинах её сторон и величине её углов. 
//Значения используйте произвольные.

#include <iostream>

class Triangle {
protected:
	int a, b, c;
	int A, B, C;
public:
	int get_a() {
		return a;
	}
	int get_b() {
		return b;
	}
	int get_c() {
		return c;
	}
	int get_A() {
		return A;
	}
	int get_B() {
		return B;
	}
	int get_C() {
		return C;
	}
	Triangle() {
		a = 10;
		b = 20;
		c = 30;
		A = 50;
		B = 60;
		C = 70;
	}
};

class rightTriangle : public Triangle {
public:
	rightTriangle() {
		a = 10;
		b = 20;
		c = 30;
		A = 50;
		B = 60;
		C = 90;
	}
};

class isoscelesTriangle : public Triangle {
public:
	isoscelesTriangle() {
		a = 10;
		b = 20;
		c = 10;
		A = 50;
		B = 60;
		C = 50;
	}
};

class equilateralTriangle : public Triangle {
public:
	equilateralTriangle() {
		a = 30;
		b = 30;
		c = 30;
		A = 60;
		B = 60;
		C = 60;
	}
};

class qadrilateral {
protected:
	int a, b, c, d;
	int A, B, C, D;
public:
	int get_a() {
		return a;
	}
	int get_b() {
		return b;
	}
	int get_c() {
		return c;
	}
	int get_d() {
		return d;
	}
	int get_A() {
		return A;
	}
	int get_B() {
		return B;
	}
	int get_C() {
		return C;
	}
	int get_D() {
		return D;
	}
	qadrilateral() {
		a = 10;
		b = 20;
		c = 10;
		d = 20;
		A = 90;
		B = 90;
		C = 90;
		D = 90;
	}
};

class square : public qadrilateral {
public:
	square() {
		a = 20;
		b = 20;
		c = 20;
		d = 20;
		A = 90;
		B = 90;
		C = 90;
		D = 90;
	}
};

class parallelogram : public qadrilateral {
public:
	parallelogram() {
		a = 20;
		b = 30;
		c = 20;
		d = 30;
		A = 30;
		B = 40;
		C = 30;
		D = 40;
	}
};

class rhombus : public qadrilateral {
public:
	rhombus() {
		a = 30;
		b = 30;
		c = 30;
		d = 30;
		A = 30;
		B = 40;
		C = 30;
		D = 40;
	}
};

void print_info(Triangle *p) {
	std::cout << "Sides: " << "a=" << p->get_a()<< " b=" << p->get_b() << " c=" << p->get_c() << std::endl;
	std::cout << "Angles: " << "A=" <<p->get_A() << " B=" << p->get_B() << " C=" << p->get_C() << std::endl << std::endl;
}
void print_info(qadrilateral *p) {
	std::cout << "Sides: " << "a=" << p->get_a() << " b=" << p->get_b() << " c=" << p->get_c() << " d=" << p->get_d() << std::endl;
	std::cout << "Angles: " << "A=" << p->get_A() << " B=" << p->get_B() << " C=" << p->get_C() << " D=" << p->get_D() << std::endl << std::endl;;
}

int main() {
	Triangle t1;
	rightTriangle t2;
	isoscelesTriangle t3;
	equilateralTriangle t4;
	qadrilateral q1;
	square q2;
	parallelogram q3;
	rhombus q4;
	Triangle *pt1 = &t1;
	Triangle *pt2 = &t2;
	Triangle *pt3 = &t3;
	Triangle *pt4 = &t4;
	qadrilateral *pq1 = &q1;
	qadrilateral *pq2 = &q2;
	qadrilateral *pq3 = &q3;
	qadrilateral *pq4 = &q4;
	std::cout << "Triangle:" << std::endl;
	print_info(pt1);
	std::cout << "rightTriangle:" << std::endl;
	print_info(pt2);
	std::cout << "isoscelesTriangle:" << std::endl;
	print_info(pt3);
	std::cout << "equilateralTriangle:" << std::endl;
	print_info(pt4);
	std::cout << "qadrilateral:" << std::endl;
	print_info(pq1);
	std::cout << "square:" << std::endl;
	print_info(pq2);
	//return 0;
	system("pause");
	std::cout << "parallelogram:" << std::endl;
	print_info(pq3);
	std::cout << "rhombus:" << std::endl;
	print_info(pq4);
}
