#include<iostream>

using namespace std;

class Worker{
	public:
		string name, surname;
		
		Worker();
		Worker(string pName, string pSurname);
		
		~Worker(){
			cout << "Destruktor" << endl;
		}
		
		void getData();
};
	Worker::Worker(){
		cout << "Konstruktor domyœlny" << endl;
	}
	Worker::Worker(string pName, string pSurname):
		name {pName},
		surname {pSurname}
	{
		cout << "Konstruktor parametryczny" << endl;
	}
	
	void Worker::getData(){
		cout << "Imiê i nazwisko: " << name << " " << surname << endl;
	}




int main(){
	setlocale(LC_CTYPE, "polish");
	
	Worker nowak = Worker{"Janusz", "Kowalski"};
	nowak.getData();
	
	
	
	return 0;
}
