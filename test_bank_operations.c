#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "bankmanagement"

/* Prototypes for all the test functions */
void test_trasactions(void);
void test_create_acc(void);
void test_acc_list(void);
void test_delete_account(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "create_acc", test_create_acc);
  CU_add_test(suite, "transactions", test_transactions);
  CU_add_test(suite, "acc_list", test_acc_list);
  CU_add_test(suite, "delete_account", test_delete_account);


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
void test_create_acc(void) {
  CU_ASSERT(123 == create_acc());
  
  /* Dummy fail*/
  CU_ASSERT(456 == create_acc());
}

void test_transactions(void) {
  CU_ASSERT(200 == transactions(200));
  
  /* Dummy fail*/
  CU_ASSERT(1000 == transactions(1000));
}

void test_acc_list(void) {
  CU_ASSERT(0 == acc_list(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(2 == acc_list(2, 5));
}

void test_delete_account(void) {
  CU_ASSERT(0 == delete_account(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(3 == delete_account(2, 2));
}
