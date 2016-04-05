#include "lib.h"

int main(int argc, char *argv[]) {
	
	double str;
	cout << "Enter number: ";
	cin >> str;
	Myprocess proc(str);
	proc.proces();
	proc.show();
	Sleep(3000);
	return 0;
}
