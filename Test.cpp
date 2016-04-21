#include "Test.h"
#include <cassert>
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

	assert(Helper::binaryToHex(00000000000000000000000000010010) == "0x00000012");
	assert(Helper::binaryToHex(00000000000000000000000000001111) == "0x0000000f");
	assert(Helper::binaryToHex(11111111111111111111111111110001) == "0xfffffff1");
	//etc.
	cerr << "Pass Test!" << endl;
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
	//do something here
	cerr << "Pass Test!" << endl;
}

void Test::testMain()
{
	//do something here
	cerr << "Pass Test!" << endl;
}
