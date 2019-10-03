#include <chrono>
#include <fstream>
#include <iostream>
#include <random>
#include <sstream>
#include <string>

using std::endl;
using std::cin;
using std::cout;
using std::hex;
using std::ifstream;
using std::istreambuf_iterator;
using std::ofstream;
using std::string;

char gen_random(const int len) {
	char s[100];
	static const char alphanum[] =
		"abcdefghijklmnopqrstuvwxyz";


static unsigned long hash(unsigned char *str)
{
	unsigned long hash = 0;
	int c;

	while (c = *str++)
		hash = c + (hash << 6) + (hash << 16) - hash;

	return hash;
}


int main(int argc, char **argv)
{
	bool choice;
	string input;
	unsigned char array[100000];
	cout << "Skaityti faila(1), ivesti(0)" << endl;
	cin >> choice;
	switch (choice) 
	{
		case 1:
			for (int i = 1; i < argc; i++)
			{
				auto start = std::chrono::high_resolution_clock::now();
				ifstream infile(argv[i]);
				if (infile.is_open() && infile.good())
				{
					cout << "Skaitomas failas.." << endl;
					string content((istreambuf_iterator<char>(infile)), (istreambuf_iterator<char>()));
					for (int j = 0; j < content.length(); j++)
						array[j] = content[j];
					cout << hex << hash(array) << endl;
					auto end = std::chrono::high_resolution_clock::now();
					std::chrono::duration<double> diff = end - start;
					cout << endl;
					cout << diff.count() << " s" << endl;
				}
				else
				{
					cout << "Nepavyko atidaryti failo" << endl;
				}
			}
			
			break;
			
		case 0: 
			cin >> input;
			for (int i = 0; i < input.length(); i++)
				array[i] = input[i];
			cout << hex << hash(array) << endl;
			break;
	}

	return 0;
}
