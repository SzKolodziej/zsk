#include<iostream>

using namespace std;

class Rectangle{
	public: 
	
		float height;
		float width;
		
		
		float circumference();
		float area();
		void result();
};

float Rectangle::circumference(){
	
	return height*2+width*2;
}

float Rectangle::area(){
	
	return width*height;
}

void Rectangle::result(){
	
	cout << "Wysokoœæ: " << height << endl << "Szerokoœæ: " << width << endl << "Obwód: " << circumference() << endl << "Pole: " << area() << endl;
}

int main(){
	setlocale(LC_CTYPE, "Polish");
	
	Rectangle rectangle;
	

		cout << "Podaj wysokoœæ: ";
		cin >> rectangle.height;
	
		cout << "Podaj szerokoœæ: ";
		cin >> rectangle.width;
	
		cout << endl;
	


	rectangle.result();
	
	return 0;
}
