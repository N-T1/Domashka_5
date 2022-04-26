#include "dom_5.h"
#include <iostream>
#include <string>
using namespace std;

int Length = 0;
double* ptr;

void set()
{
    cout << " Введите размер массива или 0 для выхода " << endl;
    cin >> Length;
    if (Length == 0)
    {
        cout << "Ошибка! ";
        exit(EXIT_SUCCESS); // EXIT_FAILURE

    }
    //cout << Length << endl;
}

void pointer()  //для выделения памяти
{
    ptr = new double[Length];
};

void data()   //для заполнения массива
{
    for (int i = 0; i < Length; i++)
    {
        *(ptr + i) = i;
        //ptr [i] = i;
    }
}

void print()   //для вывода заполненного массива
{
    cout << "Заполненный массив: ";
    for (int i = 0; i < Length; i++)
    {
        cout << *(ptr + i) << " ";
        //ptr [i] = i;
    }
    cout << endl;
}

void delete_ptr()  //для освобождения памяти
{
    delete[] ptr;
}

void run()  //запуск программы
{
    for (int i = 0; ; i++)
    {
        set();
        pointer();
        data();
        print();
        delete_ptr();
    }
}