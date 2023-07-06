
#include "module1.h"
#include <math.h>

/****************************************************************
	function: module1_sinc
		[argument]                    
    	x - real number.              
    	n - integer number, it's size of 
    			nested recursion or it's size 
    			of iteration. Beware for large 
    			number of this argument!
   	[description]
   		Apply numerical calculation of 
   		sin(pi*x)/(pi*x) using infinite 
   		product form.   
****************************************************************/
double module1_sinc(double x, unsigned int n)
{
	return (n == 0) ? 1 : 
		(1.0 - (x * x)/(n * n)) * module1_sinc(x, n - 1);
}


