
#include "IFactory.cpp"
class ProblemFactory : IFactory
{
public:
	
	ProblemFactory * Create()
	{
		return new ProblemFactory();
	}

};

