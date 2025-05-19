#include "unity.h"
#include "calculator.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_1(void) {
    printf("subtract(8, 4)\n");
    fflush(stdout);
    TEST_ASSERT_EQUAL_INT(4, subtract(8, 4));
    fflush(stdout);
}
void test_2(void) {
    printf("subtract(11, 3)\n");
    fflush(stdout);
    TEST_ASSERT_EQUAL_INT(8, subtract(11, 3));
    fflush(stdout);
}
void test_3(void) {
    printf("subtract(4, 8)\n");
    fflush(stdout);
    TEST_ASSERT_EQUAL_INT(-4, subtract(4, 8));
    fflush(stdout);
}
void test_4(void) {
    printf("subtract(-2, -3)\n");
    fflush(stdout);
    TEST_ASSERT_EQUAL_INT(1, subtract(-2, -3));
    fflush(stdout);
}