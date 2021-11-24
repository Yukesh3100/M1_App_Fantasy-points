
#include "unity.h"


/**
 * @file test_sorting.c
 * @author Nallanukala Krishna Tulasi
 * @brief 
 * @version 0.1
 * @date 2021-05-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "Sorting.h"
#define PROJECT_NAME    "Fantasy- Points"

// Prototypes for all the test functions 

void test_BubbleSort(void);


// Required by the unity test framework */
void setUp(){}
void tearDown(){}

// Start of the application test 
int main()
{
// Initiate the Unity Test Framework 
  UNITY_BEGIN();

// Run Test functions 
  RUN_TEST(test_BubbleSort);
  
  
  // Close the Unity Test Framework 
  return UNITY_END();
}

// Write all the test functions  
void test_BubbleSort(void) {
 int expected[]={10, 12, 13};
   int list[]={10, 13, 12};
   int* actual=BubbleSort(list,3);
   TEST_ASSERT_EQUAL_INT_ARRAY(expected,actual,3);
  
  
}

