#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal
{
	public:
		void className(){
			cout << "Klasa Animal\n";
		}
		void speak() override{
			cout << "D�wi�k zwierzaka\n";
		}
};

#endif
