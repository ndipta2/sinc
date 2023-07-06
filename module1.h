
#ifndef MODULE1_H_
#define MODULE1_H_

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
double module1_sinc(double x, unsigned int n);

#endif
