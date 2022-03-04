

bool canMakeArithmeticProgression(int* arr, int arrSize)
{
    int tmp;
    
    for (int i = 0; i < arrSize - 1; i++)
    {
        for (int j = 0; j < arrSize - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }   
    }
    
    tmp = abs(arr[0] - arr[1]);
    
    for (int i = 1; i < arrSize - 1; i++)
    {
        if (abs(arr[i] - arr[i + 1]) != tmp)
        {
            return false;
        }
    }
    
    return true;
}