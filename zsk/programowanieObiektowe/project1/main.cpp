#include <iostream>

using namespace std;

class Worker{

    public:
        string name, surname, personality;
        unsigned short int yearBirthday;
		float height;
		char gender; 

        void showSurname()
        {
            cout << "Nazwisko pracownika: " << surname;
        };
        
        void showPersonality();
        void showName();
        void showAllData();
};

    void Worker::showPersonality()
	{
    	cout << "Imie i nazwisko: " << name << " " << surname << endl;
	}
	
	void Worker::showName()
	{
		cout << "/nImie pracownika: " << name;
	}
	
	void Worker::showAllData()
	{
		showPersonality();
		cout << "Narodowosc: " << personality << endl <<
		"Rok urodzenia: " << yearBirthday << endl <<
		"Wzrost: " << height << "cm" << endl <<
		"Plec: ";
		
		switch(gender)
		{
		case 'm':
			cout << "mezczyzna";
			break;
		case 'w':
			cout << "kobieta";
			break;
		default:
			cout << " - ";
			break;
		}
	};

int main(int argc, char** argv)
{
	//setlocale(LC_TYPE, "polish")
	
    Worker worker1;
    worker1.name = "Krystian";
    worker1.surname = "Nowak";
    worker1.yearBirthday = 2006;
    worker1.personality = "Polish";
    worker1.height = 175.1;
    worker1.gender = 'm';

    cout << worker1.name;
	worker1.showSurname();
	worker1.showAllData();
    return 0;
}
