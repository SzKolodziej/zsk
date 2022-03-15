#include<iostream>
 using namespace std;
 
 class Animal{
 	public:
 		float weight;
 		int age;
 		
 		virtual void Look(){
 			cout << "Zwierze patrzy!!!" << endl;
		 }
		
		virtual void Breathe(){
			cout << "Zwierze oddycha!!!" << endl;
		}
 };
 
 class Fish : public Animal{
 	public:
 		virtual void Breathe(){
 			cout << "Oddycha skrzelami!!!" << endl;	
		}
		
		virtual void Swim(){
			cout << "Rybcia płynie!!!" << endl;
		}
 };
 
  class Mammal : public Animal{
 	public:
 		virtual void Breathe(){
 			cout << "Oddych płucami!!!" << endl;	
		}
		
		virtual void Run(){
			cout << "Biegnij!!!" << endl;
		}
 };
 
  class Bird : public Animal{
 	public:
 		virtual void Breathe(){
 			cout << "Oddycha płucami!!!" << endl;	
		}
		
		virtual void Fly(){
			cout << "Leć!!!" << endl;
		}
 };
 
 
 int main(){
	setlocale(LC_CTYPE, "polish");
	
	Fish zwierze;
	Animal *wsk = &zwierze;
	wsk -> Breathe();
	
	
 	return 0;
 }
