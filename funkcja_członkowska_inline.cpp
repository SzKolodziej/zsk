#include <iostream>

using namespace std;


class Room{
	public:
		float lenght, width, height;
		
		inline float roomVolume(float lenght, float width, float height){
			return lenght*width*height;
		}
};



int main(){
	setlocale(LC_CTYPE, "Polish"); 
	
	Room pokoj;
	pokoj.lenght = 3.5;
	pokoj.width = 4;
	pokoj.height = 5;
	
	cout << "D�ugo�� pokoju: " << pokoj.lenght << "m\nSzeroko�� pokoju: " << pokoj.width << "m\nWysoko�� pokoju: " << pokoj.height << "m\nObj�to�� pokoju: "
	<< pokoj.roomVolume(2,3.5,4) << "m^3";
	
	
	return 0;
}
