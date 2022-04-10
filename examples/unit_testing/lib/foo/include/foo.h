#pragma once

int foo_add(int a, int b);

int foo_conditional_add(int a, int b);

static inline int foo_inline_add(int a, int b) { return a + b; }
