

double average(int *salary, int salarySize)
{
    int tmp;
    double sum = 0;

    for (int i = 0; i < salarySize - 1; i++)
    {
        for (int j = 0; j < salarySize - i - 1; j++)
        {
            if (salary[j] > salary[j + 1])
            {
                tmp = salary[j];
                salary[j] = salary[j + 1];
                salary[j + 1] = tmp;
            }
        }
    }

    for (int i = 1; i < salarySize - 1; i++)
    {
        sum += salary[i];
    }

    return (sum / (salarySize - 2));
}