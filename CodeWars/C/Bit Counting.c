#include <stddef.h>

size_t countBits(unsigned value)
{
  size_t count = 0;

  while (value > 0)
  {
    if (value % 2 == 1)
    {
      count++;
    }
    value /= 2;
  }

  return count;
}