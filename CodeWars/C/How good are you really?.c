int better_than_average(int class_points[], int class_size, int your_points)
{
    int average_class_points = 0;

    for (int i = 0; i < class_size; i++)
    {
        average_class_points += class_points[i];
    }

    average_class_points /= class_size;

    if (average_class_points > your_points)
    {
        return 0;
    }

    return 1;
}