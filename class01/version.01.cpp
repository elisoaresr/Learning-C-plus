
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
	string nome = "Eliezer Soares";
	ofstream out("arquivo.txt");
	out << nome;
	out.close();
	
	return 0;
}