#ifndef SALLY_H
#define SALLY_H

class Sally
{
public:
	int num; //Pretend sally age or something.
	Sally();//This is a constructor with no parameters. Blank sally object.
	Sally(int);//This has a parameter of integer.
	//Creating a sally object in one of two ways.  A blank sally object or a sally object that already has a number.
	Sally operator+ (Sally);//This is going to take two of these operator number properties and add them together.
	//"operator+ is the name of our function now. It will take a parameter. It will take one sally's number and take 
	// another sallys number and add to it. So will need to pass in another sally object to pass to it.
	//Whenever using overloaded operator you have to start it with the name operator. Then right after it you need
	//to name the operator you want to overload. This could be *, +,-, divide ect.
	//This function is actually going to return a sally object
};

#endif

//In order to make an operator overload you need to make a function and give it a special name.
//Whenever you build a function in c++ you need to give it a return type.

