
#include "module1.h"
#include <stdio.h>

int main(int argc, char** argv) 
{
	fprintf(stdout, "%f\n", module1_sinc(0.5, 1000));
	return 0;
}
