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
 			cout << "Oddych skrzelami!!!" << endl;	
		}
		
		virtual void Swim(){
			cout << "Rybcia p�ynie!!!" << endl;
		}
 };
 
  class Mammal : public Animal{
 	public:
 		virtual void Breathe(){
 			cout << "Oddych p�ucami!!!" << endl;	
		}
		
		virtual void Run(){
			cout << "Biegnij!!!" << endl;
		}
 };
 
  class Bird : public Animal{
 	public:
 		virtual void Breathe(){
 			cout << "Oddycha p�ucami!!!" << endl;	
		}
		
		virtual void Fly(){
			cout << "Le�!!!" << endl;
		}
 };
 
 
 int main(){
	setlocale(LC_CTYPE, "polish");
	
	
	
	
 	return 0;
 }
