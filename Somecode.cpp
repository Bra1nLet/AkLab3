#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main ()
{
	std::ofstream oFile ("Result.txt");
	string name;
	std::cout << "Your name is: \n";
	std::cin >> name;
	oFile << "Authort: " << name;
	oFile.close();
	return 0;
}

