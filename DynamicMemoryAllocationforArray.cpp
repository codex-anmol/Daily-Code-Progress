//Dynamic Memory Allocation for Array
//Late binding
//Runtime memory allocation
/*New and delete operators are used for dynamic memory
allocation and deallocation*/
/*New and delete Operators in C++ For Dynamic Memory
Dynamic memory allocation in C/C++ refers to performing
memory allocation manually by a programmer. Dynamically
allocated memory is allocated on Heap, and non-static
and local variables get memory allocated on Stack*/ 

#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    int* arr = new int[n];

    for(int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}
