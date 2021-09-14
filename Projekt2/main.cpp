#include <iostream>

using namespace std;

class Worker{
	public:
		//deklaracja zmiennych cz³onkowskich
		string name;
		string surname;
		string nationality;
		unsigned short int yearBirthday;
		char gender;
		float height;
		
		//definicja zmiennej cz³onkowskiej
		void showName(){
			cout << "Twoje imiê: " << name;
		}
		
		//deklaracja (prototyp) metody
		void showSurname();
		void showPersonality();
		void showAllData();
		
};

//definicja metody showSurname
void Worker::showSurname(){
	cout << "Nazwisko: " << surname;
}

void Worker::showPersonality(){
	cout << "Imiê i nazwisko: " << name << " " << surname;
}

void Worker::showAllData(){
	cout << "Dane prcownika: \n";
	showPersonality();
	cout << endl;
	cout << "Narodowoœæ: " << nationality << endl << "Data urodzenia: " << yearBirthday << "r., wzrost: " << height << "cm;" <<endl;
}


int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Polish");
	
	Worker pracownik;
	pracownik.name = "Janusz";
	pracownik.surname = "Kowalski";
	pracownik.nationality = "Polska";
	pracownik.yearBirthday = 1990;
	pracownik.gender = 'm';
	pracownik.height = 180.5;
	
	//pracownik.showName();
	//pracownik.showSurname();
	pracownik.showPersonality();
	cout << endl <<endl;
	pracownik.showAllData();
	
	
	return 0;
}
