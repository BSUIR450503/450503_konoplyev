
#include <iostream>
#include <string>
#include <fstream>

#include <unistd.h>


#define MAX 1024

using namespace std;

int main(int argc, char *argv[]) {
	double input;
	double output;
	fstream input_file;
	input_file.open("temp", ios::in | ios::binary);
	if (!input_file) {
		cout << "No input number" << endl;
		return 1;
	}

	input_file >> input;
	input_file.close();

	output = input * input;

	remove("temp");

	fstream output_file;
	output_file.open("temp", ios::app | ios::binary);
	if (!output_file) {
		cout << "Error open file" << endl;
		return 1;
	}
	output_file << output;
	output_file.close();
	//usleep(3000);
	return 0;
}