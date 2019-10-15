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
using std::stringstream;

const int length = 8;
ofstream off("test.txt");

string hash(string str) 
{
	unsigned int hash = 0;
	unsigned int i = 0;
	unsigned int len = str.length();
	stringstream stream;

	for (i = 0; i < len; i++)
	{
		hash = (str[i]) + (hash << 5) + (hash << 15) - hash;
	}

	stream << hex << hash;
	string output(stream.str());
	return output;
}

void write_hash(string str)
{
	int x = 0;
	for (int i = 0; i < length; i++)
	{
		if (x < hash(str).length())
		{
			off << hash(str)[x];
			x++;
		}
		else
		{
			x = 0;
			off << hash(str)[x];
		}
	}
	off << endl;
}

void print_hash(string str)
{
	int x = 0;
	for (int i = 0; i < length; i++)
	{
		if (x < hash(str).length())
		{
			cout << hash(str)[x];
			x++;
		}
		else
		{
			x = 0;
			cout << hash(str)[x];
		}
	}
	cout << endl;
}

int main(int argc, char **argv)
{
	bool choice;
	string input, line = "";
	cout << "Skaityti faila(1), ivesti(0)" << endl;
	cin >> choice;
	switch (choice) 
	{
		case 1:
			
			for (int i = 1; i < argc; i++)
			{
				ifstream infile(argv[i]);
				if (infile.is_open() && infile.good())
				{
					cout << "Skaitomas failas.." << endl;
					auto start = std::chrono::high_resolution_clock::now();
					//string line((istreambuf_iterator<char>(infile)), (istreambuf_iterator<char>()));
					while (getline(infile, line)) write_hash(line);
					auto end = std::chrono::high_resolution_clock::now();
					std::chrono::duration<double> diff = end - start;
					off << endl;
					off << diff.count() << " s" << endl;
				}
				else
				{
					cout << "Nepavyko atidaryti failo" << endl;
				}
			}
			break;
			
		case 0: 
			cin >> input;
			print_hash(input);
			break;
	}

	return 0;
