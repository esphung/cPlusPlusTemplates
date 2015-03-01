// vector.cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main(int argc, char const *argv[]){
	

	// format of a vector: vector<DataType> nameOfVector

	vector<string> myVector;


	/* myVector.push_back(value) 
	>>> adds element to the END of the vector 
	AND (also) resizes the vector
	*/

	// read a vector
	/*
	myVector.at(index) 
	>>> returns element at a specified index number
	*/

	myVector.push_back("John");
	myVector.push_back("Doe");

	cout << "myVector items:\t\n";
	for (unsigned int i = 0; i < myVector.size(); i++){
		cout << myVector.at(i) << endl;
		//cout << myVector[i] << endl;;
	}// end for










	//cout << "Hello Vector" << endl;
	return 0;
}// end main