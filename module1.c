/**
 * @file module1.c
 * @brief Module Sinc Code
 *
 * @addtogroup SinC
 * @{
 */


#include "module1.h"
#include <math.h>

double module1_sinc(double x, unsigned int n)
{
	return (n == 0) ? 1 :
		(1.0 - (x * x)/(n * n)) * module1_sinc(x, n - 1);
}


/**  @} */

