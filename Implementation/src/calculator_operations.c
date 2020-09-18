#include <calculator_operations.h>
#include <math.h>

int add(int operand1, int operand2)
{
    return operand1 + operand2;
}

int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}

float square_root(int operand1)
{
    return sqrt(operand1);
}

float cube_root(int operand1)
{
    return cbrt(operand1);
}

float logten(int operand1)
{
    return (log10(operand1));
}

float exponent(int operand1)
{
    return (exp(operand1));
}

float power(int operand1,int operand2)
{
    return pow(operand1,operand2);
}

float sine(float operand3)
{
    float x;
    x = operand3 * (3.142 / 180.0);
    return (sin(x));
}
float cosine(float operand3)
{
    float x;
    x = operand3 * (3.142 / 180.0);
    return (cos(x));
}
float tangent(float operand3)
{
    float x;
    x = operand3 * (3.142 / 180.0);
    return (tan(x));
}
float sineh(float operand3)
{
    return (sinh(operand3));
}
float cosineh(float operand3)
{
    return (cosh(operand3));
}
float tangenth(float operand3)
{
    return (tanh(operand3));
}
float sineinv(float operand3)
{
    return (asin(operand3));
}
float cosineinv(float operand3)
{
    return (acos(operand3));
}
float tangentinv(float operand3)
{
    return (atan(operand3));
}
