#include "ExecutorFiles\Initiator.cpp"
#include "Infrastructure\ProblemFactory.cpp"

class Problem001 : ProblemFactory
{
	
	void Print(int argc, char* argv[])
	{
		char* data = argv[1];
		cout << "Given Input: " << *data << endl;
		cout << "Hello World" << endl;
	}
};