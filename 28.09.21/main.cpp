#include <iostream>

using namespace std;

struct Date{
	unsigned short int dd, mm, yyyy;
};

struct Student{
	string name, surname;
	unsigned int id;
	Date dateBirthday;
	unsigned short int gradeInformatics[5];
	
};


int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Polish");
	
	Student kowalski{"Janusz", "Nowak", 100, {28, 9, 2021}, {5, 3, 2, 3, 4} };
	
	cout << "Imiê i nazwisko: " << kowalski.name << " " << kowalski.surname
		<<"\nIndentyfikator: " << kowalski.id << "\nData urodzenia: " << kowalski.dateBirthday.dd << "-" 
		<< kowalski.dateBirthday.mm << "-" << kowalski.dateBirthday.yyyy <<endl;
	
	for(unsigned short int i; i<5; i++){
		cout << "Ocena nr" << i+1 << ": " << kowalski.gradeInformatics[i] << endl; 
	}
	
	return 0;
}
