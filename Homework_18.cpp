// Homework_18.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;



void FullArray(int* const arr, const int size)
{
    for (int a = 0; a < size; a++)
    {
        arr[a] = rand() % 10;
    }


}


void ShowArray(const int* const arr, const int size)
{
    for (int a = 0; a < size; a++)
    {
        cout << arr[a] << '\t';
    }

}


void push_in(int*& arr, int& size, const int value)
{

}

int main()
{
    int size = 6;
    int* arr = new int[size];
    FullArray(arr, size);
    ShowArray(arr, size);




    delete[] arr;
}
