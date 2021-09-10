#include <iostream>

using namespace std;

class Worker{

    public:
//Deklaracja zmiennych cz³onkowskich
        string name;
        string surname;
        int age; //dokoñczyæ, sprawdziæ typ danych

//Definicje funkcji cz³onkowskich (metody)
        void showSurname()
        {
            cout << "Nazwisko pracownika: " << surname;
        };

        void Worker::showAllData(){
        	echo << "Imie i nazwisko: " << name << " " << surname;
		}
};

int main(int argc, char** argv)
{
	setlocale(LC_TYPE, "polish")
	
    Worker worker1;
    worker1.name = "Krystian";
    worker1.surname = "Nowak";

    cout << worker1.name;
	worker1.showSurname();
	worker1.showAllData();
    return 0;
}
