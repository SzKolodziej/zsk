#include <iostream>

using namespace std;

class Worker{
	public:
		int id{8};
		string name{"Katarzyna"};
		string surname{"Nowak"};
	
//		Worker();
		Worker(int pId=10, string pName="Anna", string pSurname="Kowalska");
		void getData();
};

/*Worker::Worker(){
	id = 13;
	name = "Katarzyna";
	surname = "Nowak";
	cout <<"Konstruktor bezparametrowy"<<endl;
}*/

Worker::Worker(int pId, string pName, string pSurname){
	id = pId;
	name = pName;
	surname = pSurname;
}                                                                                                                                                                                                                                         


void Worker::getData(){
	cout<<"Id: "<< id <<"\nImiê: "<< name <<"\nNazwisko: "<< surname <<endl<<endl;
}


int main(){
	setlocale(LC_CTYPE, "polish");
	
	Worker nowak = Worker();
	nowak.getData();

	Worker nowak1 = Worker(800, "Tak", "Nie");
	nowak1.getData();
	
	Worker nowak2 = Worker(31, "Pawe³");
	nowak2.getData();
}
