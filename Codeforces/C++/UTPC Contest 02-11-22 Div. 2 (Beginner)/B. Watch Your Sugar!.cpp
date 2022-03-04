    #include <iostream>
     
    using namespace std;
     
    void quickSort(int *array, int low, int high);
    int partition(int *array, int low, int high, int pivot);
    void swap(int *array, int pos1, int pos2);
     
    int main()
    {
        int n, s, i, j, sum = 0;
     
        cin >> n >> s;
     
        int x[n];
     
        for (i = 0; i < n; i++)
        {
            cin >> x[i];
        }
     
        quickSort(x, 0, n - 1);
     
        for (i = 0; i < n; i++)
        {
            if ((sum + x[i]) <= s)
            {
                sum += x[i];
            }
            else
            {
                break;
            }
        }
     
        cout << i << endl;
     
        return 0;
    }
     
    void quickSort(int *array, int low, int high)
    {
        if (low < high)
        {
            int pivot = array[high];
            int pos = partition(array, low, high, pivot);
     
            quickSort(array, low, pos - 1);
            quickSort(array, pos + 1, high);
        }
    }
     
    int partition(int *array, int low, int high, int pivot)
    {
        int i = low;
        int j = low;
     
        while (i <= high)
        {
            if (array[i] > pivot)
            {
                i++;
            }
            else
            {
                swap(array, i, j);
                i++;
                j++;
            }
        }
        return j - 1;
    }
     
    void swap(int *array, int pos1, int pos2)
    {
        int temp;
        temp = array[pos1];
        array[pos1] = array[pos2];
        array[pos2] = temp;
    }