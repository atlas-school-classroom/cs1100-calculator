#include "unity.h"
#include "calculator.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_1(void) {
    printf("divide(15, 3)\n");
    fflush(stdout);
    TEST_ASSERT_EQUAL_INT(5, divide(15, 3));
    fflush(stdout);
}
void test_2(void) {
    printf("divide(15, -3)\n");
    fflush(stdout);
    TEST_ASSERT_EQUAL_INT(-5, divide(15, -3));
    fflush(stdout);
}
void test_3(void) {
    printf("divide(20, 2)\n");
    fflush(stdout);
    TEST_ASSERT_EQUAL_INT(10, divide(20, 2));
    fflush(stdout);
}
void test_4(void) {
    printf("divide(0, 1)\n");
    fflush(stdout);
    TEST_ASSERT_EQUAL_INT(0, divide(0, 1));
    fflush(stdout);
}
