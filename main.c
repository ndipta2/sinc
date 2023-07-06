/**
 * @file main.c
 * @brief Main Program Entry
 *
 * @addtogroup Main
 * @{
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "module1.h"

/**
 * @brief Main Program
 * @return Success Value
 */
int main(int argc, char** argv)
{
    if(argc != 3) {
        printf("using default value\n");
        double defX = 0.5;
        unsigned int defN = 1000;

        printf("SinC of X = %f and N = %i is %f\n", defX, defN, module1_sinc(defX, defN));
    }
    else{
        double valX = atof(argv[1]);
        unsigned valN = atoi(argv[2]);
        printf("SinC of X = %f and N = %i is %f\n", valX, valN, module1_sinc(valX, valN));
    }

	return 0;
}

/**  @} */

