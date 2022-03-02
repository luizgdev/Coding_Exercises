int hammingWeight(u_int32_t n)
{
    int cont;

    for (cont = 0; n; cont++)
    {
        n &= n - 1;
    }

    return cont;
}