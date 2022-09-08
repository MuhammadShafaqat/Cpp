#include <iostream>
using namespace std;

int main() {
	float temp;
	  
	cout<< "Enter the celcius temperature: ";	 	
	cin>>temp;
	float kelvin = temp + 273;
	 
	cout<< "Temperature in kelvin: " <<kelvin;
	cout<<endl<<endl<<endl;
	
	
		float kel;
	 
	cout<< "Enter the kelvin temperature: ";	 	
	cin>>kel;
	float celcius = kel - 273;
	 
	cout<< "Temperature in celcius: " <<celcius;
 
	
 
  return 0;
}
