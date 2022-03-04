int largestPerimeter(int* nums, int numsSize)
{
    int tmp;
    
    for (int i = 0; i < numsSize - 1; i++)
    {
        for (int j = 0; j < numsSize - i - 1; j++)
        {
            if (nums[j] < nums[j + 1])
            {
                tmp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = tmp;
            }
        }
    }
    
    for (int i = 0; i < numsSize - 2; i++)
    {
        if (nums[i] < nums[i + 1] + nums[i + 2])
        {
            return (nums[i] + nums[i + 1] + nums[i + 2]);
        }
    }
    
    return 0;
}