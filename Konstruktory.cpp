#include<iostream>

using namespace std;

struct Date{
	int dd, mm, yyyy;
};

class Car{
	public:
		int id;
		string brand, model, color;
		unsigned short int power;
		float price;
		Date dateOfProduction;
		
		void getData();
		
		/*Car(){
		//	cout<<"Konstruktor";
			id = 10;
			brand="Fiat", model="126p", color="czerwony";
			power=490;
			dateOfProduction={19,10,2021};
			price=200;
		}*/
		
		Car(int, string, unsigned short int, float, Date);
};
Car::Car(int pId, string pbrand, unsigned short int ppower, float pprice, Date pdateOfProduction){
	
}

void Car::getData(){
	cout<<"\nId: "<<id<<"\nMarka: "<<brand<<"\nModel: "<<model<<"\nRok produkcji: "<<dateOfProduction.yyyy
	<<"r.\nMoc: "<<power<<"KM\nKolor: "<<color<<"\nCena: "<<price<<"PLN"<<endl<<endl;
}


int main(){
	setlocale(LC_CTYPE, "polish");
	
	Car fiat(1, "x", 1, 1, {1,2,3});
	fiat.getData();
	
	
	return 0;
}
