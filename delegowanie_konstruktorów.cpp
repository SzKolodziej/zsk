#include<iostream>

using namespace std;

class Rectangle{
	private:
		double sideA, sideB;
		string color;
		
	public:
		Rectangle();
		Rectangle(double pSideA, double pSideB);
		
		void setColor(string pColor);
		void getData();
		
};

	Rectangle::Rectangle(){
		cout << "Konstruktor domyœlny" << endl;
		setColor("aqua");
	}
	
	Rectangle::Rectangle(double pSideA, double pSideB){
		cout << "Konstruktor parametryczny" << endl;
		sideA = pSideA;
		sideB = pSideB;
		setColor("aqua");
	}	
	
	void Rectangle::setColor(string pColor){
		color = pColor;
	}
	void Rectangle::getData(){
		cout << "Bok a: " << sideA << "\nBok b: " << sideB << "\nKolor: " << color << endl;
	}


int main(){
	setlocale(LC_CTYPE, "polish");
	
	Rectangle p1;
	p1.getData();
	cout << endl << endl << endl;
	
	Rectangle p2(2,4);
	p2.getData();
	p2.setColor("czarny");
	p2.getData();
	
	
	
	
	return 0;
}
