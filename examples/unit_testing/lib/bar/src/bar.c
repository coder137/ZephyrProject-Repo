#include "bar.h"

#include "foo.h"

int bar_add(int a, int b) { return foo_conditional_add(a, b); }
