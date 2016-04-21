#include "Test.h"
#include <cassert>
#include "MathUnit.h"
#include <iostream>
using namespace std;


//default - create a Test instance with a starting number 0
Test::Test()
{
}
int main(int argc, char *argv[])
{
	cout << "main!" << endl;
	Test::testHelper();
	Test::testCounter();
	Test::testRegisterMemory();
	Test::testDataMemory();
	Test::testMathUnit();
	Test::testMain();
}
//Test Helper
void Test::testHelper()
{
	assert(Helper::decToHex(18,-1) == "0x00000012");
	assert(Helper::decToHex(15,-1) == "0x0000000f");
	assert(Helper::decToHex(-15,-1) == "0xfffffff1");

	assert(Helper::hexToDec("0x12") == 18);
	assert(Helper::hexToDec("0xF") == 15);
	assert(Helper::hexToDec("0xf") == 15);
	assert(Helper::hexToDec("0xfffffff1") == -15);

	assert(Helper::binaryToHex("00000000000000000000000000010010",8) == "0x00000012");
	assert(Helper::binaryToHex("00000000000000000000000000001111",8) == "0x0000000f");
	assert(Helper::binaryToHex("11111111111111111111111111110001",8) == "0xfffffff1");

	/**assert(Helper::hexToBinary("0x00000012",32) == "00000000000000000000000000010010");
	assert(Helper::hexToBinary("0x0000000f",32) == "00000000000000000000000000001111");
	assert(Helper::hexToBinary("0xfffffff1",32) == "11111111111111111111111111110001");*/
	//etc.
	cerr << "Helper Passes Test!" << endl;
}

void Test::testCounter()
{
	//do something here
	cerr << "Pass Test!" << endl;
}

void Test::testRegisterMemory()
{
	//do something here
	cerr << "Pass Test!" << endl;
}

void Test::testDataMemory()
{
	//do something here
	cerr << "Pass Test!" << endl;
}

void Test::testMathUnit()
{
	MathUnit test = MathUnit();
	test.setInNumber1("0x00000012"); // 18
	test.setInNumber2("0xfffffff1"); // -15
	
	test.setControl("0");
	test.calculate();
	assert(test.getOutNumber() == "0x00000012");

	test.setControl("1");
	test.calculate();
	assert(test.getOutNumber() == "0xfffffff1");

	test.setControl("ADD");
	test.calculate();
	assert(test.getOutNumber() == "0x00000003");
	
	test.setControl("SUB");
	test.calculate();
	assert(test.getOutNumber() == "0x00000021");
	
	test.setControl("EQUAL");
	test.calculate();
	assert(test.getOutNumber() == "0");
	
	test.setControl("LESSTHAN");
	test.calculate();
	assert(test.getOutNumber() == "0");

	test.setInNumber1("0xf392945");
	test.setControl("SL2"); // length 7 or 8 - output is the same length
	test.calculate();
	assert(test.getOutNumber() == "0xce4a514");

	test.setInNumber1("0x0032");	
	test.setControl("SIGNEXTEND"); // length 4 - output length 8
	test.calculate();
	assert(test.getOutNumber() == "0x00000032");
	
	cerr << "MathUnit Passes Test!" << endl;
}

void Test::testMain()
{
	//do something here
	cerr << "Pass Test!" << endl;
}
