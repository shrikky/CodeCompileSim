#include <iostream>
#include <map>
#include "Infrastructure\IFactory.cpp"
using namespace std;


typedef map<char*, IFactory*> ListOfPrograms;
string applicationName;

// TIME TO USE REFLECTION

void Initialize()
{
	//ListOfPrograms["Program001"] = new ProblemFactory();
}


int main(int argc, char* argv[])
{
	applicationName = argv[0];
	std::cout << argv[1];
}