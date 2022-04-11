/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <sys/printk.h>
#include <zephyr.h>

#include "bar.h"
#include "foo.h"

void main(void) {
  printk("Hello World! %s\n", CONFIG_BOARD);
  printk("Foo: %d\n", foo_add(1, 2));
  printk("Bar: %d\n", bar_add(2, 3));
}
