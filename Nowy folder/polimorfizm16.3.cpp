#include<iostream>
using namespace std;

class Animal{
	public: 
		void className(){
			cout << "Klasa Animal\n";
		}
		virtual void speak(){
			cout << "D¿wiêl zwierzaka\n";
		}
};
class Dog : public Animal{
	public:
		void className(){
			cout << "Klasa Dog\n";
		}
		void speak() override{
			cout << "Hauhau\n";
		}
};


int main(){
	setlocale(LC_CTYPE, "polish");
	
	Animal zwierze;
	zwierze.className();
	
	Dog *wskDog = new Dog();
	wskDog -> className();
	wskDog -> speak();
	
	Animal *wskAnimal = new Dog();
	wskAnimal -> className();
	wskAnimal -> speak();
	
	
	return 0;
}
