#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;


int main()
{
	
	string inputData;

	ifstream fileStream("./InputFiles/Input.txt", ios::in | ios::out);
	if (fileStream.is_open())
	{
		while (getline(fileStream, inputData))
		fileStream.close();
	}

	system("cd E:/CodeCompileSim/CodeCompileSim/CodeCompileSim/TargetFiles/ && g++ -o main.exe *.cpp");
	string inputPath = "cd E:/CodeCompileSim/CodeCompileSim/CodeCompileSim/TargetFiles/";
	string exec = "main.exe " + inputData;
	string command = inputPath + "&&" + exec;
	system(command.c_str());
	return 0;
}