#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;


int main()
{
	
	string inputData;

	system("cd");
	ifstream fileStream("./InputFiles/Input.txt", ios::in | ios::out);

	if (fileStream.is_open())
	{
		while (getline(fileStream, inputData))
		fileStream.close();
	}

	system("cd E:/CodeCompileSim/CodeCompileSim/CodeCompileSim/Infrastructure && g++ -I E:/CodeCompileSim/CodeCompileSim/CodeCompileSim/ExecutorFiles -I E:/CodeCompileSim/CodeCompileSim/CodeCompileSim/SourceFiles -o main.exe *.cpp");
	string ExecPath = "cd E:/CodeCompileSim/CodeCompileSim/CodeCompileSim/ExecutorFiles/";
	string exec = "main.exe " + inputData;
	string command = ExecPath + "&&" + exec;
	system(command.c_str());
	return 0;
}