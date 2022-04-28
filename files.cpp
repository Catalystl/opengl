#include <iostream>
#include <fstream>
#include <string>

int main(void)
{
	std::string line;

	std::ofstream openfile("file.txt");
	openfile << "Text.\n";
	openfile.close();

	std::ifstream myfile("file.txt");

	if (myfile.is_open())
	{
		while (std::getline(myfile, line))
		{
			std::cout << line << "\n";
		}
		myfile.close();
	}
	else std::cout << "Unable to open file :(\n";

	return 0;
}
