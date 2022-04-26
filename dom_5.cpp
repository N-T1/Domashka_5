#include "dom_5.h"
#include <iostream>
#include <string>
using namespace std;

int Length = 0;
double* ptr;

void set()
{
    cout << " ������� ������ ������� ��� 0 ��� ������ " << endl;
    cin >> Length;
    if (Length == 0)
    {
        cout << "������! ";
        exit(EXIT_SUCCESS); // EXIT_FAILURE

    }
    //cout << Length << endl;
}

void pointer()  //��� ��������� ������
{
    ptr = new double[Length];
};

void data()   //��� ���������� �������
{
    for (int i = 0; i < Length; i++)
    {
        *(ptr + i) = i;
        //ptr [i] = i;
    }
}

void print()   //��� ������ ������������ �������
{
    cout << "����������� ������: ";
    for (int i = 0; i < Length; i++)
    {
        cout << *(ptr + i) << " ";
        //ptr [i] = i;
    }
    cout << endl;
}

void delete_ptr()  //��� ������������ ������
{
    delete[] ptr;
}

void run()  //������ ���������
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