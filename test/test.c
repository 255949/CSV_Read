#include "header.h"
#include "unity.h"

FILE *fptr;

//Required by unity test framework
void setUp()
{}
////Required by unity test framework
void tearDown()
{}

/**
 * @brief Check if file detected or not
 * 
 */
void check_file()
{
    TEST_ASSERT_EQUAL(open("data.csv","r",&fptr),SUCCESS);
    TEST_ASSERT_EQUAL(open("abc.csv","r",&fptr),READ_ERROR);
}
int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(check_file);
    return UNITY_END();
}