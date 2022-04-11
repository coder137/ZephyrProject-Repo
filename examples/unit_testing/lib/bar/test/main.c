/*
 * Copyright (c) 2016 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <ztest.h>

#include <fff.h>

#include "bar.h"

#include "mock_foo.h"

static void test_return_value_tests(void) {
  foo_conditional_add_fake.return_val = 3;
  zassert_equal(bar_add(1, 2), 3, NULL);
  zassert_equal(foo_conditional_add_fake.call_count, 1, NULL);
}

void test_main(void) {
  ztest_test_suite(mock_framework_tests,
                   ztest_unit_test(test_return_value_tests));

  ztest_run_test_suite(mock_framework_tests);
}
