int get_sum(int a, int b)
{
    int sum = 0;

    if (a == b)
    {
        return a;
    }
    else
    {
        if (a < b)
        {
            while (a <= b)
            {
                sum += a++;
            }
        }
        else if (b < a)
        {
            while (b <= a)
            {
                sum += b++;
            }
        }

        return sum;
    }
}