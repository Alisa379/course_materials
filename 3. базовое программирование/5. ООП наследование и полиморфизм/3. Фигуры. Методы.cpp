
//Задача: спроектировать и реализовать классы, описывающие предметную область. 
//Продемонструйте их работу: создайте по одному экземпляру каждой фигуры и выведите на экран информацию о фигурах.

#include <iostream>
#include <string.h>

class Figure {
	protected:
		bool right = 1;
		int sides = 0;
		std::string name = "Figure";
		
	public:
		void check() {
			if (right) {
				std::cout << "right" << std::endl;
			}
			else {
				std::cout << "wrong" << std::endl;
			}
		}
		void info_() {
			std::cout << name << ":" << std::endl;
			check();
			std::cout << "Amount of sides: " << sides << std::endl << std::endl;
		}
};

class Triangle : public Figure {
	public:
		Triangle() {
			sides = 3;
			name = "Triangle";
		}
		int a = 10, b = 20, c = 30;
		int A = 50, B = 60, C = 70;
	void checkout() {
			if (sides == 3 && A+B+C==180) {
				right = 1;
			}
			else {
				right = 0;
			}
		}	
	void info() {
		std::cout << name << ":" << std::endl;
		checkout();
		check();
		std::cout << "Amount of sides: " << sides << std::endl;
		std::cout << "Sides: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Angles: " << "A=" << A << " B=" << B << " C=" << C <<std::endl << std::endl;
	}
};

class rightTriangle : public Triangle {
	public:
	rightTriangle() {
		name = "rightTriangle";
		C = 90;
	}
	void checkout1() {
			if (c == 90 && sides == 3 && A+B+C==180) {
				right = 1;
			}
			else {
				right = 0;
			}
		}
	void info1() {
		std::cout << name << ":" << std::endl;
		checkout1();
		check();
		std::cout << "Amount of sides: " << sides << std::endl;
		std::cout << "Sides: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Angles: " << "A=" << A << " B=" << B << " C=" << C <<std::endl << std::endl;
	}
};

class rightTriangle1 : public Triangle {
	public:
	rightTriangle1() {
		name = "rightTriangle";
		B = 40;
		C = 90;
	}
	void checkout2() {
			if (C == 90 && sides == 3 && A+B+C==180) {
				right = 1;
			}
			else {
				right = 0;
			}
		}
	void info2() {
		std::cout << name << ":" << std::endl;
		checkout2();
		check();
		std::cout << "Amount of sides: " << sides << std::endl;
		std::cout << "Sides: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Angles: " << "A=" << A << " B=" << B << " C=" << C <<std::endl << std::endl;
	}
};

class isoscelesTriangle : public Triangle {
	public:
	isoscelesTriangle() {
		name = "isoscelesTriangle";
		c = 10;
		B = 60;
		C = 50;
	}
	void checkout3() {
			if (a==c && sides == 3 && A+B+C==180 && A==C) {
				right = 1;
			}
			else {
				right = 0;
			}
		}
	void info3() {
		std::cout << name << ":" << std::endl;
		checkout3();
		check();
		std::cout << "Amount of sides: " << sides << std::endl;
		std::cout << "Sides: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Angles: " << "A=" << A << " B=" << B << " C=" << C <<std::endl << std::endl;
	}
};

class equilateralTriangle : public Triangle {
	public:
	equilateralTriangle() {
		name = "equilateralTriangle";
		a = 30;
		b = 30;
		c = 30;
		A = 60;
		C = 60;
	}
	void checkout4() {
			if (a==b && b==c && sides==3 && sides == 3 && A==60 && B==60 && C==60) {
				right = 1;
			}
			else {
				right = 0;
			}
		}
	void info4() {
		std::cout << name << ":" << std::endl;
		checkout4();
		check();
		std::cout << "Amount of sides: " << sides << std::endl;
		std::cout << "Sides: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Angles: " << "A=" << A << " B=" << B << " C=" << C <<std::endl << std::endl;
	}
};

class qadrilateral : public Figure {
	public:
		qadrilateral() {
			sides = 4;
			name = "qadrilateral";
		}
		int a = 10, b = 20, c = 30, d = 40;
		int A = 50, B = 60, C = 70, D = 80;
	void checkout() {
			if (sides == 4 && A+B+C+D==360) {
				right = 1;
			}
			else {
				right = 0;
			}
		}	
	void info() {
		std::cout << name << ":" << std::endl;
		checkout();
		check();
		std::cout << "Amount of sides: " << sides << std::endl;
		std::cout << "Sides: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Angles: " << "A=" << A << " B=" << B << " C=" << C  << " D=" << D <<std::endl << std::endl;
	}
};

class square : public qadrilateral {
	public:
		square() {
			sides = 4;
			name = "square";
		}
		int a = 20, b = 20, c = 20, d = 20;
		int A = 90, B = 90, C = 90, D = 90;
	void checkout1() {
			if (sides == 4 && a==b && b==c && c==d && A==90 && B==90 && C==90 && D==90) {
				right = 1;
			}
			else {
				right = 0;
			}
		}	
	void info1() {
		std::cout << name << ":" << std::endl;
		checkout1();
		check();
		std::cout << "Amount of sides: " << sides << std::endl;
		std::cout << "Sides: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Angles: " << "A=" << A << " B=" << B << " C=" << C  << " D=" << D <<std::endl << std::endl;
	}
};

class parallelogram : public qadrilateral {
	public:
		parallelogram() {
			sides = 4;
			name = "parallelogram";
		}
		int a = 20, b = 30, c = 20, d = 30;
		int A = 30, B = 40, C = 30, D = 40;
	void checkout2() {
			if (sides == 4 && a==c && b==d && A==C && B==D && A+B+C+D==360) {
				right = 1;
			}
			else {
				right = 0;
			}
		}	
	void info2() {
		std::cout << name << ":" << std::endl;
		checkout2();
		check();
		std::cout << "Amount of sides: " << sides << std::endl;
		std::cout << "Sides: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Angles: " << "A=" << A << " B=" << B << " C=" << C  << " D=" << D <<std::endl << std::endl;
	}
};

class rhombus : public qadrilateral {
	public:
		rhombus() {
			sides = 4;
			name = "rhombus";
		}
		int a = 30, b = 30, c = 30, d = 30;
		int A = 30, B = 40, C = 30, D = 40;
	void checkout3() {
			if (sides == 4 && a==b && b==c && c==d && A==C && B==D && A+B+C+D==360) {
				right = 1;
			}
			else {
				right = 0;
			}
		}	
	void info3() {
		std::cout << name << ":" << std::endl;
		checkout3();
		check();
		std::cout << "Amount of sides: " << sides << std::endl;
		std::cout << "Sides: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Angles: " << "A=" << A << " B=" << B << " C=" << C  << " D=" << D <<std::endl << std::endl;
	}
};

class rectangle : public qadrilateral {
	public:
		rectangle() {
			sides = 4;
			name = "rectangle";
		}
		int a = 10, b = 20, c = 10, d = 20;
		int A = 90, B = 90, C = 90, D = 90;
	void checkout4() {
			if (sides == 4 && a==c && b==d && A==90 && B==90 && C==90 && D==90) {
				right = 1;
			}
			else {
				right = 0;
			}
		}	
	void info4() {
		std::cout << name << ":" << std::endl;
		checkout4();
		check();
		std::cout << "Amount of sides: " << sides << std::endl;
		std::cout << "Sides: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Angles: " << "A=" << A << " B=" << B << " C=" << C  << " D=" << D <<std::endl << std::endl;
	}
};

int main() {
	Figure f1;
	f1.info_();
	Triangle f2;
	f2.info();
	rightTriangle f3;
	f3.info1();
	system("pause");
	rightTriangle1 f4;
	f4.info2();
	isoscelesTriangle f5;
	f5.info3();
	equilateralTriangle f6;
	f6.info4();
	system("pause");
	qadrilateral f7;
	f7.info();
	square f8;
	f8.info1();
	parallelogram f9;
	f9.info2();
	system("pause");
	rhombus f10;
	f10.info3();
	rectangle f11;
	f11.info4();
}