/* This program displays the size of each Data Types
   as well as their range*/

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main(){

   //Declaring variable
	char charData; 
	double dData;
	int iData;
	float fData;
	signed int sData;
	unsigned  int uData;
	bool bData;
	int *p;

	//Displaying each fundamental data types on the console
	cout << " Size of char is: " << sizeof charData << endl;
	cout << " Size  of double is: " << sizeof dData << endl;
	cout << " Size  of  int is: " << sizeof iData << endl;
	cout << " Size  of float is: " << sizeof fData << endl;
	cout << " Size  of int signed is: " << sizeof sData << endl;
	cout << " Size  of int unsigned is: " << sizeof uData << endl;
	cout << " Size  of bool is: " << sizeof bData << endl;
	cout << " the size of int pointer is: " << sizeof p << endl;
	cout << endl;
	cout << "Type   \tLowest  \tHighest\n" <<endl;
	cout << "signed char\t"
		<< numeric_limits<signed char>::lowest() << '\t'
		<< numeric_limits<signed char>::max() << '\n';
	cout << "unsigned char\t"
		<< numeric_limits<unsigned char>::lowest() << '\t'
		<< numeric_limits<unsigned char>::max() << '\n';
	cout << "double\t"
		<< numeric_limits<double>::lowest() << '\t'
		<< numeric_limits<double>::max() << '\n';
	cout << "int\t"
		<< numeric_limits<int>::lowest() << '\t'
		<< numeric_limits<int>::max() << '\n';
	cout << "float\t"
		<< numeric_limits<float>::lowest() << '\t'
		<< numeric_limits<float>::max() << '\n';
	cout << "signed\t"
		<< numeric_limits<signed int>::lowest() << '\t'
		<< numeric_limits<signed int>::max() << '\n';
	cout << "unsigned\t"
		<< numeric_limits<unsigned>::lowest() << '\t'
		<< numeric_limits<unsigned>::max() << '\n';

	cout << "bool\t"
		<< numeric_limits<bool>::lowest() << '\t'
		<< numeric_limits<bool>::max() << '\n';
	

	return 0;
}