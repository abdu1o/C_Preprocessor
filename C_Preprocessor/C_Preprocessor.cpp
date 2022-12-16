#include <iostream>
#include "function.h"
#define N 10
using namespace std;

int main() 
{

#define INTEGER

    int arr[N];

    cout << "1 Array: " << "\n";

    Fill(arr, N);
    Show(arr, N);

    cout << "\n";
    cout << "Sort array: " << "\n";

    Sort(arr, N);
    Show(arr, N);

    cout << "\n";

    FindMin(arr, N);

    cout << "\n";

    FindMax(arr, N);

    cout << "\n";

    Change(arr);

#undef INTEGER


#define FLOAT
#include "function.h"

    cout << "\n";

    float arr1[N];

    cout << "2 Array: " << "\n";

    Fill(arr1, N);
    Show(arr1, N);

    cout << "\n";

    cout << "Sort array: " << "\n";

    Sort(arr1, N);
    Show(arr1, N);

    cout << "\n\n";

    FindMin(arr1, N);

    cout << "\n";

    FindMax(arr1, N);

    cout << "\n";

    Change(arr1);

#undef FLOAT


#define CHAR
#include "function.h"

    cout << "\n";

    char arr2[N];

    cout << "3 Array:" << "\n";

    Fill(arr2, N);
    Show(arr2, N);

    cout << "\n\n";

    cout << "Sort array: " << "\n";

    Sort(arr2, N);
    Show(arr2, N);

    cout << "\n";

    FindMin(arr2, N);

    cout << "\n";

    FindMax(arr2, N);

    cout << "\n";

    Change(arr2);

#undef CHAR

    system("pause");
}