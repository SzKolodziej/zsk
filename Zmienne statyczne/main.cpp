#include <iostream>

using namespace std;

class School{
	public:
		static string s_school;
		static string s_jobPosition;
	
		string name;
		string surname;
		
		void getDate();
		void setSurname(string name, string surname);
		
		static string s_getSchool();
		static void s_setSchool(string pSchool){
			s_school = pSchool;
		}
};

	string School::s_school = "ZSK";
	string School::s_jobPosition = "student";
	
	void School::getDate(){
		cout << "Imiê i nazwisko: " << name << surname;
	}
	
	void School::setSurname(string name, string surname){
		School::name=name;
		School::surname = surname;
	}
	
	string School::s_getSchool(){
		return s_school;
	}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	
	cout << School::s_school << endl;
	cout << School::s_jobPosition << endl;
	
	School kowal;
	kowal.setSurname("Janusz", "Kowal");
	kowal.getDate();
	School::s_jobPosition = "wyk³adowca";
	cout << "\nstanowisko: " << School::s_jobPosition << endl;
	kowal.s_jobPosition = "Dziekan";
	cout << kowal.s_jobPosition << endl;
	cout << School::s_jobPosition << endl;
	cout << School::s_getSchool() << endl;
	School::s_setSchool("ZSX");
	cout << School::s_getSchool();
	
	return 0;
}
