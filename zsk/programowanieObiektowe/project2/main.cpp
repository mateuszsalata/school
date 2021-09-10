#include <iostream>
using namespace std;

class Rectangle
{	
	public:
		float sidea, sideb;
		
		float area();
		
		float circumference();
};

	float Rectangle::area()
	{
		return sidea*sideb;
	}

	float Rectangle::circumference()
	{
		return (2*sidea) + (2*sideb);
	}

int main(int argc, char** argv)
{
	Rectangle rec1;
	
	cout << "Podaj dlugosc boku a w cm: ";
	cin >> rec1.sidea;
	
	cout << "Podaj dlugosc boku b w cm: ";
	cin >> rec1.sideb;
	
	cout << "Pole prostokata to: " << rec1.area() << "." << endl << "Obwód prostokata to: " << rec1.circumference() << ".";
	return 0;
}
