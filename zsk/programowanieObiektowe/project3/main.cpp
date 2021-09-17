#include <iostream>
using namespace std;

struct Date
{
	unsigned short int d, m, rrrr;
};

struct Student
{
	string name, surname;
	unsigned int id;
	Date dateBirthday;
	unsigned short int gradeInformatics[5];
};

int main(int argc, char** argv)
{
	setlocale(LC_CTYPE, "polish")
	
	Student kowalski {"Janusz", "Nowak", 1000, {17,9,2021}};
	
	cout << "Dane pracownika\n" << "Imiê i nazwisko: " << kowalski.name << " " << kowalski.surname <<
	"\nIdentyfikator Studenta: " << kowalski.id <<
	"\nData urodzenia: " << kowalski.dateBirthday.d << kowalski.dateBirthday.m << kowalski.dateBirthday.rrrr <<
	"\nOceny z informatyki: " << 
	
	for (int i=0; i<5; i++)
	{
		cout << "ocena " << i+1 << ": " << kowalskigradeInformatics[i] << endl;
	}
	
	
	return 0;
}
