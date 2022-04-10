#include <ztest.h>

#include "foo.h"

static void test_foo_add_func(void) { zassert_equal(foo_add(1, 2), 3, ""); }

static void test_foo_conditional_add_func(void) {
  zassert_equal(foo_conditional_add(1, 2), 3, "");
  zassert_equal(foo_conditional_add(0, 2), 0, "");
  zassert_equal(foo_conditional_add(1, 0), 0, "");
}

static void test_foo_inline_add_func(void) {
  zassert_equal(foo_inline_add(1, 0), 1, "");
}

void test_main(void) {
  ztest_test_suite(lib_foo_test, ztest_unit_test(test_foo_add_func),
                   ztest_unit_test(test_foo_conditional_add_func),
                   ztest_unit_test(test_foo_inline_add_func));

  ztest_run_test_suite(lib_foo_test);
}
