/* This program displays Fundamental data types 
   as well as their range
*/

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main(){

   //Declaring variables
	char charData = 'c'; 
	double dData = 1.5;
	int iData = 1234;
	float fData = 1.355;
	signed int sData = 1999;
	unsigned  int uData = 10000;
	bool bData = false;
	

	//Displaying each fundamental data types on the console
	cout << " Display character data type: " <<charData<< endl;
	cout << " Display double data type: " <<dData<< endl;
	cout << " Display  int data type: " <<iData<< endl;
	cout << " Display float data type: " <<fData<< endl;
	cout << " Display int signed data type: " <<sData << endl;
	cout << " Display int unsigned data type: " <<uData << endl;
	cout << " Display bool data type: " << bData <<endl;
	
	//Displaying data types range
	cout << endl;
	cout << "signed char range is between: "
		<< numeric_limits<signed char>::min() 
		<< " and " << numeric_limits<signed char>::max() << '\n';
	cout << "unsigned char range is between: "
		<< " and "<< numeric_limits<unsigned char>::min()
		<< numeric_limits<unsigned char>::max() << '\n';
	cout << "double range is between: "
		<< numeric_limits<double>::min() 
		<< " and " << numeric_limits<double>::max() << '\n';
	cout << "int range is between: "
		<< numeric_limits<int>::min() 
		<< " and " << numeric_limits<int>::max() << '\n';
	cout << "float range is between: "
		<< numeric_limits<float>::min() 
		<< " and " << numeric_limits<float>::max() << '\n';
	cout << "signed range is between: "
		<< numeric_limits<signed int>::min()
		<< " and " << numeric_limits<signed int>::max() << '\n';
	cout << "unsigned range is between: "
		<< numeric_limits<unsigned>::min() 
		<< " and "<< numeric_limits<unsigned>::max() << '\n';

	cout << "bool range is between: "
		<< numeric_limits<bool>::min() 
		<< " and " << numeric_limits<bool>::max() << '\n';
	

	return 0;
}