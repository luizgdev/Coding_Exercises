int signFunc(double num)
{
    if (num > 0)
    {
        return 1;
    }
    else if (num < 0)
    {
        return -1;
    }

    return 0;
}

int arraySign(int *nums, int numsSize)
{
    double product = 1;

    for (int i = 0; i < numsSize; i++)
    {
        product *= nums[i];
    }

    return signFunc(product);
}