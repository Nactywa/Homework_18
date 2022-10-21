// Homework_18.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define __CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW

#include <iostream>
#include <string>



using std::string;
using namespace std;



template <class AnyType>
class Stack
{
private:

    AnyType* StackArray = NULL;
    int size = 0;

public:

    Stack()
    {

    }

    ~Stack()
    {

    }



    void push_in(AnyType value)
    {
        AnyType* newArray = new AnyType[size + 1];
        cout << "Add Element " << value << endl;

        for (int a = 0; a < size; a++)
        {
            newArray[a] = StackArray[a];
        }

        newArray [size] = value;

        delete[] StackArray;
        size++;
        StackArray = newArray;
    }

    void pop_in()
    {

        size--;

    }

    void Print()
    {
        for (int a = 0; a < size; a++)
        {
            cout << *(StackArray + a) << "";
        }
        std::cout << std::endl;
    }

    void Delete()
    {
        delete[] StackArray;

    }
};



int main()
{
    Stack <int> INTStack;
    Stack <string> STRINGStack;

    INTStack.push_in(9);
    INTStack.push_in(8);
    INTStack.push_in(7);
    INTStack.push_in(6);
    INTStack.push_in(5);

    INTStack.Print();
    INTStack.pop_in();
    INTStack.Print();
    INTStack.pop_in();
    INTStack.Print();
    INTStack.pop_in();
    INTStack.Print();
    INTStack.push_in(8);
    INTStack.Print();
    INTStack.Delete();

    cout << "  -----------" << endl;

    STRINGStack.push_in("Test:0");
    STRINGStack.push_in("Test:1");
    STRINGStack.push_in("Test:2");
    STRINGStack.push_in("Test:3");
    STRINGStack.push_in("Test:4");
    STRINGStack.pop_in();
    STRINGStack.Print();
    STRINGStack.pop_in();
    STRINGStack.Print();
    STRINGStack.push_in("itsWork:1");
    STRINGStack.Print();
    STRINGStack.Delete();


}