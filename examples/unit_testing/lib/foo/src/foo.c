#include "foo.h"

int foo_add(int a, int b) { return a + b; }

int foo_conditional_add(int a, int b) {
  if (a <= 0 || b <= 0) {
    return 0;
  }
  return foo_add(a, b);
}
