#include <iostream>
//#include<locale.h>

using namespace std;

class Worker{
	public:
//	deklaracja zmiennych członkowskich
		string name = "Janusz";
		string surname;
		unsigned short int age;
	
//	definicja funkcji członkowskiej
			void showName(){
				cout << "Twoje imię: ";
		}
};


int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Polish");
	
//typ danych gy v
	Worker pracownik;
	pracownik.surname = "Nowak";
	pracownik.showName();
	pracownik.age = 15;
	cout << "\nWiek: " << pracownik.age << "\n\n";
	
	
	return 0;
}
