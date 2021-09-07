#include <iostream>
//#include<locale.h>

using namespace std;

class Worker{
	public:
//	deklaracja zmiennych cz³onkowskich
		string name = "Janusz";
		string surname;
		unsigned short int age;
	
//	definicja funkcji cz³onkowskiej
			void showName(){
				cout << "Twoje imiê: ";
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
