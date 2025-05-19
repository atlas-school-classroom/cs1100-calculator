#include "unity.h"
#include "calculator.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_1(void) {
    printf("multiply(3, 2)\n");
    fflush(stdout);
    TEST_ASSERT_EQUAL_INT(6, multiply(3, 2));
     fflush(stdout);
}
void test_2(void) {
    printf("multiply(4, 0)\n");
    fflush(stdout);
    TEST_ASSERT_EQUAL_INT(0, multiply(4, 0));
     fflush(stdout);
}
void test_3(void) {
    printf("multiply(-7, -3)\n");
    fflush(stdout);
    TEST_ASSERT_EQUAL_INT(21, multiply(-7, -3));
    fflush(stdout);
}
void test_4(void) {
    printf("multiply(8, -2)\n");
    fflush(stdout);
    TEST_ASSERT_EQUAL_INT(-16, multiply(8, -2));    
    fflush(stdout);
}