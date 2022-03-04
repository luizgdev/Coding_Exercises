#define ManhattanDistance(x, y, a, b) ((abs((x) - (a))) + (abs((y) - (b))))

int nearestValidPoint(int x, int y, int** points, int pointsSize, int* pointsColSize)
{
    int count = 0;
    int tmp = __INT_MAX__;
    
    for (int i = 0; i < pointsSize; i++)
    {
        if (points[i][0] == x || points[i][1] == y)
        {
            if (tmp > ManhattanDistance(x, y, points[i][0], points[i][1]))
            {
                tmp = ManhattanDistance(x, y, points[i][0], points[i][1]);
            }
            count++;
        }
    }
    
   if (count != 0)
    {
        for (int i = 0; i < pointsSize; i++)
        {
            if ((points[i][0] == x || points[i][1] == y) && (ManhattanDistance(x, y, points[i][0], points[i][1]) == tmp))
            {
                return i;
            }
        }
    }
    
    return -1;
}