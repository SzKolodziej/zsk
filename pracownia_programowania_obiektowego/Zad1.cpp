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
	
	cout << "Wysoko��: " << height << endl << "Szeroko��: " << width << endl << "Obw�d: " << circumference() << endl << "Pole: " << area() << endl;
}

int main(){
	setlocale(LC_CTYPE, "Polish");
	
	Rectangle rectangle;
	

		cout << "Podaj wysoko��: ";
		cin >> rectangle.height;
	
		cout << "Podaj szeroko��: ";
		cin >> rectangle.width;
	
		cout << endl;
	


	rectangle.result();
	
	return 0;
}
