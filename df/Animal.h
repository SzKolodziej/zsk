#ifndef ANIMAL_H
#define ANIMAL_H
using namespace std;

class Animal
{
	public:
		void className(){
			cout << "Klasa Animal\n";
		}
		virtual void speak(){
			cout << "D�wi�k zwierzaka\n";
		}
};

#endif
