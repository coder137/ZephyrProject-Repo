#pragma once

#include <fff.h>

#include "foo.h"

DEFINE_FFF_GLOBALS;

FAKE_VALUE_FUNC(int, foo_add, int, int);
FAKE_VALUE_FUNC(int, foo_conditional_add, int, int);
