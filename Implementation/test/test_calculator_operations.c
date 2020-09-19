#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_power(void);
void test_log(void);
void test_exponent(void);
void test_squareroot(void);
void test_cuberoot(void);
void test_sine(void);
void test_cosine(void);
void test_tangent(void);
void test_sineh(void);
void test_cosineh(void);
void test_tangenth(void);
void test_sineinv(void);
void test_cosineinv(void);
void test_tangentinv(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "add", test_add);
  CU_add_test(suite, "subtract", test_subtract);
  CU_add_test(suite, "multiply", test_multiply);
  CU_add_test(suite, "divide", test_divide);
  CU_add_test(suite, "power", test_power);
  CU_add_test(suite, "log", test_log);
  CU_add_test(suite, "exp", test_exponent);
  CU_add_test(suite, "square root", test_squareroot);
  CU_add_test(suite, "cube root", test_cuberoot);
  CU_add_test(suite, "sine", test_sine);
  CU_add_test(suite, "cosine", test_cosine);
  CU_add_test(suite, "tangent", test_tangent);
  CU_add_test(suite, "sinh", test_sineh);
  CU_add_test(suite, "cosh", test_cosineh);
  CU_add_test(suite, "tanh", test_tangenth);
  CU_add_test(suite, "sine inv", test_sineinv);
  CU_add_test(suite, "cosine inv", test_cosineinv);
  CU_add_test(suite, "tangent inv", test_tangentinv);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_add(void) {
  CU_ASSERT(15 == add(10, 5));
  
 
}

void test_subtract(void) {
  CU_ASSERT(5 == subtract(10, 5));
  
 
}

void test_multiply(void) {
  CU_ASSERT(50 == multiply(10, 5));
  
 
}

void test_divide(void) {
  CU_ASSERT(2 == divide(10,5));
  
}
void test_power(void) {
  CU_ASSERT(100 == power(10,2));
  
}
void test_log(void) {
  CU_ASSERT(2== logten(100));
  
}
void test_exponent(void) {
  CU_ASSERT(1.64== exponent(.5));
  
}
void test_squareroot(void) {
  CU_ASSERT(2== square_root(4));
  
}
void test_cuberoot(void) {
  CU_ASSERT(2== cube_root(8));
  
}
void test_sine(void) {
  CU_ASSERT(1== sine(90));
  
}
void test_cosine(void) {
  CU_ASSERT(0== cosine(90));
  
}
void test_tangent(void) {
  CU_ASSERT(1== tangent(45));
  
}
void test_sineh(void) {
  CU_ASSERT(3.62== sineh(2));
  
}
void test_cosineh(void) {
  CU_ASSERT(3.76== cosineh(2));
  
}
void test_tangenth(void) {
  CU_ASSERT(0.9== tangenth(2));
  
}
void test_sineinv(void) {
  CU_ASSERT(0.52== sineinv(0.5));
  
}
void test_cosineinv(void) {
  CU_ASSERT(1.04== cosineinv(0.5));
  
}
void test_tangentinv(void) {
  CU_ASSERT(0.46== tangentinv(0.5));
  
}
