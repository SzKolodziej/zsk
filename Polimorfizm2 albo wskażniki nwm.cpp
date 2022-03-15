#include<iostream>
 using namespace std;
 
class c1{
	int a, b, c;
	
	virtual void f(){
		cout << "Funkcja" << endl;
	}
};

class c2{
	int a, b, c;
	
	void f(){
		cout << "Funkcja" << endl;
	}
};

class c3{
	int a, b, c;
	
	virtual void f1(){
		cout << "Funkcja 1" << endl;
	}
	virtual void f2(){
		cout << "Funkcja 2" << endl;
	}
};
 
 
 int main(){
	setlocale(LC_CTYPE, "polish");
	
	c1 *wsk1 = new c1;
	cout << sizeof(*wsk1) << endl;  //24
	
	c2 *wsk2 = new c2;
	cout << sizeof(*wsk2) << endl;  //12
	
	c3 *wsk3 = new c3;
	cout << sizeof(*wsk3) << endl;  //24
	
	//sizeof()
	cout << "Typ int zajmuje: " << sizeof(int) << " bajtów" <<endl;
	cout << "Typ char zajmuje: " << sizeof(char) << " bajtów" <<endl;
	cout << "Typ string zajmuje: " << sizeof(string) << " bajtów" <<endl;
	cout << "Typ float zajmuje: " << sizeof(float) << " bajtów" <<endl;
	cout << "Typ double zajmuje: " << sizeof(double) << " bajtów" <<endl;
	cout << "Typ bool zajmuje: " << sizeof(bool) << " bajtów" <<endl;
	
	string name = "Janusz";
	cout << sizeof(name);
	
	
 	return 0;
 }
