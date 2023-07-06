/**
 * @file module1.h
 * @brief Module SinC Header
 *
 * @addtogroup SinC
 * @{
 */


#ifndef MODULE1_H_
#define MODULE1_H_

/**
 * @brief SinC Calculation
 * @details Apply numerical calculation of sin(pi*x)/(pi*x) using infinite product form.
 * @param x [double] a Real Number as Sin function input.
 * @param n [unsigned int] Recursion iteration. Don't to big as it might consume memory a lot.
 *
 * @return
 */
double module1_sinc(double x, unsigned int n);

#endif

/**  @} */

