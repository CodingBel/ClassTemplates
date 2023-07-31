/*
* This program is about usign class templates. Class templates allows us to create a template of a class 
* where we could create objects of different types using the same functions. 
*/

#include <iostream>
#include <string>

template <class myTmp>		// The template of the class
class Abel {
private: 
	myTmp var; 

public: 
	void setVar(myTmp val) {
		var = val; 
	}

	myTmp getVar() {
		return var; 
	}
};

int main() {
	Abel <int> obj1;			// Creating an object of type int
	Abel <double> obj2;			// Creating an object of type double 
	Abel <std::string> obj3;	// Creating an object of type std::string  

	obj1.setVar(27);			// Calling functions 
	obj2.setVar(12.8);			// 
	obj3.setVar("Perseverence");

	std::cout << obj1.getVar() << std::endl;	//
	std::cout << obj2.getVar() << std::endl;	//
	std::cout << obj3.getVar() << std::endl;	// 
}