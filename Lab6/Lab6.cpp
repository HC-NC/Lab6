#include <iostream>
#include <windows.h>

using namespace std;

bool isPrime(int n);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int N = 5;

    int a[N][N];

    cout << "Введите матрицу " << N << "x" << N << ":" << endl;

    for (int j = 0; j < N; j++)
    {
        for (int i = 0; i < N; i++)
            cin >> a[j][i];
    }

    cout << endl;

    int res = 0;

    for (int j = 0; j < N; j++)
    {
        for (int i = 0; i < N; i++)
        {
            if (i == N - j - 1)
            {
                cout << a[j][i] << " ";

                if (isPrime(a[j][i]))
                    res += 1;
            }
        }
    }

    cout << endl;

    cout << "Результат: " << res << endl;
}

bool isPrime(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}