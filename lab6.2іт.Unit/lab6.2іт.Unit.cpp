#include "pch.h"
#include "CppUnitTest.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

// Реалізація функції для проведення тестування
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

namespace UnitTest
{
    TEST_CLASS(UnitTest_Lab_6_2_Iter)
    {
    public:

        TEST_METHOD(TestCountOdd)
        {
            const int n = 7;
            int a[n] = { -3, 2, 0, 5, 7, -4, 9 };
            // Непарні значення: -3, 5, 7, 9 (всього 4)

            int expected = 4;
            int actual = CountOdd(a, n);

            Assert::AreEqual(expected, actual);
        }
    };
}