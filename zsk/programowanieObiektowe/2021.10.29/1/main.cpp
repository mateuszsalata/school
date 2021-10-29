#include <iostream>

using namespace std;

class Car {
	public:
		unsigned int pId;
		string pBrand;
		string pModel;
		
		void getData();
		
		Car();
		
		Car(unsigned int pId, string pBrand, string pModel);
};

void Car::getData() {
	cout << "Id: " << pId << "\nMarka i model: " << pBrand << " " << pModel << endl;
};

Car::Car():
	pId {0},
	pBrand {"MARKA"},
	pModel {"MODEL"}
	{
		cout << "Konstruktor domyslny\n";
	};
	
Car::Car(unsigned int pId, string pBrand, string pModel):
	pId {pId},
	pBrand {pBrand},
	pModel {pModel}
	{
		cout << "Konstruktor parametryczny\n";
	}
	
int main(int argc, char** argv) {
	
	Car car1;
	car1.getData();
	
	Car fiet = Car();
	
	return 0;
}
