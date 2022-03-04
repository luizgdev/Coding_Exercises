int recursive(int num, int limit)
{
    if (num != 1)
    {
        if (limit > 6)
        {
            return 0;
        }
        else
        {
            int sum = 0;
        
            while (num > 0)
            {
                sum += pow((num % 10), 2);
                num /= 10;
            }
        
            return recursive(sum, ++limit);
        }
    }
    
    return 1;
}

bool isHappy(int n)
{   
    int limit = 0;
    
    if (recursive(n, limit) == 1)
    {
      return true;  
    }
    
    return false;
}