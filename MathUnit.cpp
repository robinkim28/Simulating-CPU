#include "MathUnit.h"
#include "Helper.h"

MathUnit::MathUnit()
{
	control = "0";
}

MathUnit::MathUnit(vector<string> listOperation)
{
	vector<string> listOperationAllowed = listOperation;
}

void MathUnit::calculate()
{


	if(control == "0")	//multiplexor function
	{
		outNumber = inNumber1;

	}	
	else if(control == "1")	//multiplexor function
	{
		outNumber = inNumber2;
	}
	else if(control  == "ADD")	// add ALU
	{
		int num1 = Helper::hexToDec(inNumber1);
		int num2 = Helper::hexToDec(inNumber2);
		long sum = num1 + num2;
		if (sum > 2147483647 || sum < -2147483647)
		{
			cerr << "overflow" << endl;
		}
		outNumber = Helper::decToHex((int)sum);
		
	}
	else if(control == "SUB")
	{
		int num1 = Helper::hexToDec(inNumber1);
		int num2 = Helper::hexToDec(inNumber2);
		long sum = num1 - num2;
		if (sum > 2147483647 || sum < -2147483647)
		{
			cerr << "overflow" << endl;
		}
		outNumber = Helper::decToHex((int)sum);
	}
	else if(control == "EQUAL")
	{	
		int num1 = Helper::hexToDec(inNumber1);
		int num2 = Helper::hexToDec(inNumber2);
		if (num1 != num2)
		{
			outNumber = "1"; 
		}
		else
		{
			outNumber = "0";
		}

	}
	else if (control == "LESSTHAN")
	{
		int num1 = Helper::hexToDec(inNumber1);
		int num2 = Helper::hexToDec(inNumber2);
		if(num1 < num2)
		{

			outNumber = "1";
		}
		else
		{
			outNumber ="2";
		}
	}
}
