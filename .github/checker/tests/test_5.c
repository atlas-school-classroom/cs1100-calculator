#include "unity.h"
#include "calculator.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_1(void) {
    printf("modulo(15, 3)\n");
    fflush(stdout);
    TEST_ASSERT_EQUAL_INT(0, modulo(15, 3));
    fflush(stdout);
}
void test_2(void) {
    printf("modulo(7, 2)\n");
    fflush(stdout);
    TEST_ASSERT_EQUAL_INT(1, modulo(7, 2));
    fflush(stdout);
}
void test_3(void) {
    printf("modulo(14, 3)\n");
    fflush(stdout);
    TEST_ASSERT_EQUAL_INT(2, modulo(14, 3));
    fflush(stdout);
}
void test_4(void) {
    printf("modulo(34, 5)\n");
    fflush(stdout);
    TEST_ASSERT_EQUAL_INT(4, modulo(34, 5));
    fflush(stdout);
}