#include <iostream>

using namespace std;
 
class Animal{
	public:
 		static int s_count;
 		
 		Animal(){
 			cout << "Konstruktor - ";
 			s_count++;
 			cout << "Iloœæ obiektów: " << Animal::s_count << endl;
		 }
		 
		~Animal(){
			cout << "Destruktor - ";
			s_count--;
			cout << "Iloœæ obiektów: " << Animal::s_count << endl;
		}
};
int Animal::s_count = 0;

void createObjectAnimal(){
	 
	Animal animal;
}
 
 
int main(){
	setlocale(LC_CTYPE, "polish");
	
	cout << "Iloœæ obiektów: " << Animal::s_count << endl;
	
	Animal dog;
	
	createObjectAnimal();
	
	createObjectAnimal();
	
	Animal cat;

	Animal cow;
	
	createObjectAnimal();
	

	
	
	return 0;
}
