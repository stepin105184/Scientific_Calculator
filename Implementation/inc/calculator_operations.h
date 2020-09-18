/** 
* @file calculator_operations.h
* Calculator application with 4 mathematical operations
*
*/
#ifndef __CALCULATOR_OPERATIONS_H__
#define __CALCULATOR_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <math.h>

/**
*  adds the operand1 and operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
int add(int operand1, int operand2);

/**
*  subtracts the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 - operand2
*/
int subtract(int operand1, int operand2);

/**
*  multiply the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 * operand2
*/
int multiply(int operand1, int operand2);


/**
* divides the operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
int divide(int operand1, int operand2);
float power(int operand1, int operand2);
float logten(int operand1);
float exponent(int operand1);
float square_root(int operand1);
float cube_root(int operand1);
float sine(float operand3);
float cosine(float operand3);
float tangent(float operand3);
float sineh(float operand3);
float cosineh(float operand3);
float tangenth(float operand3);
float sineinv(float operand3);
float cosineinv(float operand3);
float tangentinv(float operand3);

#endif  /* #define __CALCULATOR_OPERATIONS_H__ */
