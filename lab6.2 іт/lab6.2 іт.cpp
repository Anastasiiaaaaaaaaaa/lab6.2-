#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

// Прототипи функцій
void Create(int* a, const int size, const int Low, const int High);
void Print(const int* a, const int size);
int CountOdd(const int* a, const int size);

int main()
{
    srand((unsigned)time(NULL));

    const int n = 10;
    int a[n];
    const int Low = -10;
    const int High = 10;

    // 1. Формування масиву
    Create(a, n, Low, High);

    // 2. Виведення початкового масиву
    cout << "Array a:" << endl;
    Print(a, n);

    // 3. Обчислення кількості непарних елементів
    int count = CountOdd(a, n);

    // 4. Виведення результату
    cout << endl;
    cout << "Count of odd elements = " << count << endl;

    return 0;
}

// Реалізація функцій
void Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
    {
        a[i] = Low + rand() % (High - Low + 1);
    }
}

void Print(const int* a, const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << setw(4) << a[i];
    }
    cout << endl;
}

int CountOdd(const int* a, const int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 != 0)
        {
            count++;
        }
    }
    return count;
}