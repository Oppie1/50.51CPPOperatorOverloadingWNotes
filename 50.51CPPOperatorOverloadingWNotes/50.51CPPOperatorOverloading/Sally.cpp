#include <iostream>
#include "Sally.h"
using namespace std;

Sally::Sally()
{}


Sally::Sally(int a) { //This is linked to sally.h. This is sally object that passes an integer  
	num = a;//and pass in the property of "num"
}

Sally Sally::operator+(Sally aso) { //***"b" was treated as the parameter of another sally object.****
	//Returning a sally object.Write class you're working with. Takes a parameter here "aso"
	Sally brandNew;//Created new object but doesnt have anything for num property. Going to be return a brand new sally object.
	//This line creates a brand new sally object.
	brandNew.num = num + aso.num; //aso is "b" object for an object and sets it to "num" like a. Well int a.
	//Want to set it to the current objects number value plus another Sally objects number value.
	//This gives the brand new sally object a number value.
		//We are setting this equal to the current objects number value plus another 
	return(brandNew);//This line returns the brand new sally object to main.
	//So it's returns value is "c" is brandNew.num --> num which = a + aso.num which = b.
}
//aso= another sally object
//Will have two sally objects one that has a number sally object of 34 and another that has a value of 21. So the
//brand new sally object will have a number of 55.



//Rough notes
//{
	//Sally::Sally()
	//{}

//Sally::Sally(int a) //This is linked to the header.  
//int a = num;
//Whenever we create a sally object here int a. This will
//take this "num" property from header file and set it equal to a.

//Operator overloading.  Allows you to use C++ operators like +,-,*, ect. and change the way that they're used.
//For example maybe you have a class and you want to add to objects together:

//Use operator overloading to specify what you want operators to do. Made new class called sally to include sally header file.

