#include <iostream>
#include "Sally.h"
using namespace std;

int main()

{
	Sally a(34); //This is a sally object "A". "num" had a value of 34
	Sally b(21);//b sally object is 21
	Sally c; //This is a blank Sally object we want to give a value to that doesnt have a parameter.
	//Blank sally object is located In the sally.cpp file.

	//Whenever you wanted to give a number value to before we would do it like this:
	//c.num = a.add(b); c equals a . add then add b to that. What that would do is whenever you wanted to add a 
	//number property to c it would take a and add b and it would get some integer and add it to the property of c
	//With overloaded property we dont have to do that anymore. For instance:
	c = a + b;
	//Whenever use the + sign c already knows we have a special meaning for it and to go to the header to run function
	//located in header.
	cout << c.num << endl;
}

//With our blank sally object "c" we want to add a + b.
//computer knows that we are trying to use sally object function in sally.cpp
//With operator overloading basiclally means you dont have to use a function name anymore. Takes plus sign and changes
//what could be this c=a.add(b) and changes it into a plus sign.








