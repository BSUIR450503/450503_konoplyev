#include "libra.h"

int main(int argc, char *argv[]) {
	
	double str;
	cout << "Enter number: ";
	cin >> str;
	Myprocess proc(str);
	proc.proces();
	proc.show();
	
	//usleep(3000);
	return 0;
}
