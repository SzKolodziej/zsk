#include<iostream>

using namespace std;

class Rectangle{
	private:
		double sideA, sideB;
		
	public:
		Rectangle();
		Rectangle(double spideA, double psideB);
		
//prototyp konstruktora kopiujacego
		Rectangle(const Rectangle &);
		
		void catchSides(double&, double&);
		void setSides(double sideA, double sideB);
		void getSides();
		double area();
		double circuit();
};
	Rectangle::Rectangle(){
		cout << "Konstruktor domyślny" << endl;
	}
	
	Rectangle::Rectangle(double psideA, double psideB){
		cout << "Konstruktor parametryczny" << endl;
		sideA = psideA;
		sideB = psideB;
	}
	
	Rectangle::Rectangle(const Rectangle& model){
		cout << "Konstruktor kopiujący" << endl;
		sideA = model.sideA;
		sideB = model.sideB;
	}
	
	void Rectangle::catchSides(double &pSideA, double &pSideB){
		pSideA = sideA;
		pSideB = sideB;
	}
	
	void Rectangle::setSides(double sideA, double sideB){
		sideA = sideA;
		sideB = sideB;
	}
	
	double Rectangle::area(){
		return sideA*sideB;
	}
	
	double Rectangle::circuit(){
		return 2*sideA + 2*sideB;
	}
	
	void Rectangle::getSides(){
		cout<< "Bok a: " << sideA << "\nBok b: " << sideB << endl;
	}

	Rectangle copyRectangle(Rectangle rectangle){
		return rectangle;
	}

int main(){
	setlocale(LC_CTYPE, "polish");
	
	double a, b;
	
	cout << "Prostokąt 1:" << endl;
	Rectangle prostokat1(2, 4);
	prostokat1.getSides();
	cout << "a: " << a << "\nb: " << b << endl << endl << endl;
	
	cout << "Prostokąt 2:" << endl;
	Rectangle prostokat2 = prostokat1;
	prostokat2.catchSides(a, b);
	prostokat2.getSides();
	cout << "a: " << a << "\nb: " << b << endl << endl << endl;
	
	cout << "Prostokąt 3:" << endl;
	Rectangle prostokat3(prostokat1);
	prostokat3.catchSides(a, b);
	prostokat3.getSides();
	cout << "a: " << a << "\nb: " << b << endl << endl << endl;
	
	cout << "Prostokąt 4: " << endl;
	Rectangle prostokat4 = copyRectangle(prostokat1);
	prostokat4.catchSides(a, b);
	//prostokat4.getSides();
	cout << "a: " << a << "\nb: " << b << endl << endl << endl;
	
	return 0;
}
