#include "dom_5_new.h"
#include <iostream>
#include <string>
using namespace std;

double* set(int Length)
{
    /* double* ptr = new double[Length];
     return ptr;*/
    return new double[Length];
}

void data(double* ptr, int Length)
{
    for (int i = 0; i < Length; i++)
    {
        *(ptr + i) = i;
        //ptr [i] = i;
    }
    //return ptr;
}

void print(double* ptr, int Length)
{
    cout << "Заполненный массив: ";
    for (int i = 0; i < Length; i++)
    {
        cout << *(ptr + i) << " ";
        //ptr [i] = i;
    }
    cout << endl;
}

void delete_ptr(double* ptr)
{
    delete[] ptr;
}

void run()
{
    int Length = 0;

    for (int i = 0; ; i++)
    {
        cout << " Введите размер массива или 0 для выхода " << endl;
        cin >> Length;
        if (Length == 0)
        {
            cout << "Ошибка! ";
            exit(EXIT_SUCCESS); //   EXIT_FAILURE
        }
        double* dbl;
        dbl = set(Length);
        data(dbl, Length);
        print(dbl, Length);
        delete_ptr(dbl);
    }
}

