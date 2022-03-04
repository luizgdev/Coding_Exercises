#include <stddef.h>

int sum_array(const int *values, size_t count)
{
    double sum = 0;

    if (count == 0)
    {
        return 0;
    }
    else
    {
        for (size_t i = 0; i < count; i++)
        {
            sum += values[i];
        }
    }

    return sum;
}
