#include<iostream>
#include "Animal.h"
#include "Dog.h"
using namespace std;

int main(){
	setlocale(LC_CTYPE, "polish");

	Animal *wskAnimal = new Animal();
	wskAnimal -> className();
	wskAnimal -> speak();

	Dog *wskDog = new Dog();
	wskDog -> className();
	wskDog -> speak();

	Dog zwierze;
	Animal *wskDog1 = &zwierze;
	wskDog1 -> className();
	wskDog1 -> speak();



	return 0;
}

