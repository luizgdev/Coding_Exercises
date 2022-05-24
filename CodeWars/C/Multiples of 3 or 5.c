int solution(int number)
{
    int sum = 0;
    if (number > 0)
    {
        while (number > 0)
        {
            number--;
            if (number % 3 == 0 || number % 5 == 0)
            {
                sum += number;
            }
        }
        return sum;
    }
    return 0;
}