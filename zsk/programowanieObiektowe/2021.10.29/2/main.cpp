#include <iostream>

using namespace std;

class Rectangle {
	private:
		double sideA;
		double sideB;
	
	public:
		Rectangle();
		Rectangle(double pSideA, double pSideB);
		Rectangle(const Rectangle&);
		
		void catchSides(double&, double&);
		void setSides(double pSideA, double pSideB);
		void getSides();
		double area();
		double circuit();
		
};

Rectangle::Rectangle() {
	cout << "Konstruktor domyslny" << endl;
};
Rectangle::Rectangle(double pSideA, double pSideB) {
	cout << "Konstruktor parametryczny" << endl;
	sideA = pSideA;
	sideB = pSideB;
};
Rectangle::Rectangle(const Rectangle& model) {
	sideA = model.sideA;
	sideB = model.sideB;
	cout << "\nKonstruktor kopiuj¹cy" << endl;
};

void Rectangle::catchSides(double &pSideA, double &pSideB) {
	pSideA = sideA;
	pSideB = sideB;
};

void Rectangle::getSides() {
	cout << "Bok a: " << sideA << "\nBok b: " << sideB << endl;
}

double Rectangle::area() {
	return sideA * sideB;
}

double Rectangle::circuit() {
	return 2 * sideA + 2 * sideB;
}

Rectangle copyRectangle(Rectangle rectangle) {
	return Rectangle;
}

int main() {
	double a, b;
	
	//1
	cout << "\nPierwszy prostokat: \n";
	
	Rectangle p1(10, 20);
	
	cout << "a: " << a << ", b: " << b << endl;
	
	p1.getSides();
	p1.catchSides(a, b);
	cout << "a: " << a << ", b" << b << endl;
	
	// 2
	cout << "\nDrugi prostokat: \n";
	
	Rectangle p2 = p1;
	
	cout << "a: " << a << ", b: " << b << endl;
	
	p2.getSides();
	p2.catchSides(a, b);
	cout << "a: " << a << ", b: " << b << endl;
	
	//3
	cout << "\nTrzeci prostokat: \n";
	
	Rectangle p3(p1);
	
	cout << "a: " << a << ", b: " << b << endl;
	
	p3.getSides();
	p3.catchSides(a, b);
	
	cout << "a: " << a << ", b: " << b << endl;
	
	//4
	
	return 0;
}
