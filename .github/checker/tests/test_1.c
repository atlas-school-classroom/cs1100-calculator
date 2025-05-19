#include "unity.h"
#include "calculator.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_1(void) {
    printf("add(4, 3)\n");
    fflush(stdout);
    TEST_ASSERT_EQUAL_INT(7, add(4, 3));
    fflush(stdout);
}
void test_2(void) {
    printf("add(2, 8)\n");
    fflush(stdout);
    TEST_ASSERT_EQUAL_INT(10, add(2, 8));
    fflush(stdout);
}

void test_3(void) {
    printf("add(8, 1)\n");
    fflush(stdout);
    TEST_ASSERT_EQUAL_INT(9, add(8, 1));
    fflush(stdout);
}
void test_4(void) {
    printf("add(-4, 3)\n");
    fflush(stdout);
    TEST_ASSERT_EQUAL_INT(-1, add(-4, 3));
    fflush(stdout);
}