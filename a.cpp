#include <iostream>
using namespace std;
#include <stdlib.h>
#include <string.h>


const char *usage = "Usage: a.out [type] [num1] [num2] \n"
		    "	type - circle, rectangle, triangle \n"
		    "	num1 - width or radius \n"
		    "	num2 - length \n";

int main(int argc, char *argv[]) 
{
	double num1 = 0, num2 = 0;

	if (argc < 3) {
	    cout << usage << endl;
	    return -1;
	} else {
		num1 = atof(argv[2]);
		if (argc == 4)
			num2 = atof(argv[3]);
	}

	

	return 0;
}