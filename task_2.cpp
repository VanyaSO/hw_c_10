#include <iostream>
using namespace std;

// Написати програму, що містить функцію, яка приймає як аргумент покажчики на три масиви та розмір масивів,
// заносить у масив C суми елементів масивів А і В. Розмір масивів однаковий

void initArr(int* arr, int size)
{
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 10;
    }
}

void initArraySum(const int* arrA, const int* arrB, int* arrC, int size)
{
    int sumA = 0, sumB = 0;

    for (int i = 0; i < size; ++i) {
        sumA += arrA[i];
        sumB += arrB[i];
    }

    arrC[0] = sumA;
    arrC[1] = sumB;
}

int main()
{
    srand(time(0));

    const int SIZE = 7, SIZE_ARR_SUM = 2;
    int* arrA = new int[SIZE];
    int* arrB = new int[SIZE];
    int* arrC = new int[SIZE_ARR_SUM];

    initArr(arrA, SIZE);
    initArr(arrB, SIZE);

    initArraySum(arrA, arrB, arrC, SIZE);

    return 0;
}
