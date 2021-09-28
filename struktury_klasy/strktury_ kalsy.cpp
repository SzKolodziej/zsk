#include <iostream>

using namespace std;


struct Date{
	unsigned short int dd, mm, yyyy;
};

class Worker{
	public:
		unsigned int id {0};
		string name {}, surname {};
		Date dateBirth;
		
		void showAllData();
		void setData(unsigned int id, string name, string surname, Date birthDay);
};

void Worker::showAllData(){
	cout << "Dane pracownika: \nIndentyfikator pracownika: " << id << "\nImiê i nazwisko: " << name << " " << surname
	<< "\nData urodzenia: " <<dateBirth.dd << "-" << dateBirth.mm << "-" << dateBirth.yyyy;
};

void Worker::setData(unsigned int id, string name, string surname, Date birthDay){
	Worker::id=id;
	Worker::name = name;
	Worker::surname = surname;
	Worker::dateBirth = {};
};


int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Polish");
	
	Worker kowalski;
	
	kowalski.setData(5, "Jan", "Kowalski", {28, 9, 2021});
	kowalski.showAllData();
	
	
	
	return 0;
}
