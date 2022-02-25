    #include <iostream>
     
    using namespace std;
     
    int main()
    {
        unsigned n;
     
        cin >> n;
     
        char nome[n][100];
        unsigned numero[n], soma;
     
        for (int i = 0; i < n; i++)
        {
            cin >> nome[i] >> numero[i];
            soma = 0;
            while (numero[i] > 0)
            {
                soma += numero[i] % 10;
                numero[i] /= 10;
            }
            if (soma % 2 == 0)
            {
                cout << nome[i] << endl;
            }
        }
     
        return 0;
    }