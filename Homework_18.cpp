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
    cout << '\n';
}


void push_in(int*& arr, int& size, const int value)
{
    int* newArray = new int[size + 1];
    
    for (int a = 0; a < size; a++)
    {
        newArray[a] = arr[a];
    }
    
    newArray[size++] = value;

    delete[] arr;

    arr = newArray;
}

void pop_in(int*& arr, int& size)
{
    size--;
    int *newArray = new int[size];
    
    for (int a = 0; a < size; a++)
    {
        newArray[a] = arr[a];
    }

    delete[] arr;

    arr = newArray;

}

int main()
{
    int size = 6;
    int* arr = new int[size];
    
    FullArray(arr, size);
    
    ShowArray(arr, size);

    push_in(arr, size, 999);

    ShowArray(arr, size);

    pop_in(arr, size);

    ShowArray(arr, size);



    delete[] arr;
}
