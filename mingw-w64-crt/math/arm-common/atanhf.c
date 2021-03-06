/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */

#include <math.h>

float atanhf(float x)
{
  if (x > 1 || x < -1)
    return NAN;
  if (-1e-6 < x && x < 1e-6)
    return x + x*x*x/3;
  else
    return (logf(1 + x) - logf(1 - x)) / 2;
}
