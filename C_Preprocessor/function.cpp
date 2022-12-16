#include <iostream>
using namespace std;


void FillRandInt(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }
}

void PrintInt(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void FindMinInt(int arr[], int n)
{
    int min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            swap(arr[i], min);
        }
    }

    cout << "Min: " << min << "\n";
}

void FindMaxInt(int arr[], int n)
{
    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            swap(arr[i], max);
        }
    }

    cout << "Max: " << max << "\n";
}

void SortArrInt(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}

void ChangeInt(int arr[])
{
    int d, val;

    cout << "Element in array: " << "\n";
    cin >> d;

    cout << "Value to change: " << "\n";
    cin >> val;

    arr[d + 1] = val;
}


void FillRandFloat(float arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = float(((float)rand() / RAND_MAX));;
    }
}

void PrintFloat(float arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void FindMinFloat(float arr[], int n)
{
    float min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            swap(arr[i], min);
        }
    }

    cout << "Min: " << min << "\n";
}

void FindMaxFloat(float arr[], int n)
{
    float max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            swap(arr[i], max);
        }
    }

    cout << "Max: " << max << "\n";
}

void SortFloat(float arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}

void ChangeFloat(float arr[])
{
    int d;
    float val;

    cout << "Element in array: " << "\n";
    cin >> d;

    cout << "Value to change: " << "\n";
    cin >> val;

    arr[d + 1] = val;
}


void FillRandChar(char arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 255;
    }
}

void PrintChar(char arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << (char)arr[i] << " ";
    }
}

void FindMinChar(char arr[], int n)
{
    char min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            swap(arr[i], min);
        }
    }

    cout << "Min: " << min << "\n";
}

void FindMaxChar(char arr[], int n)
{
    char max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            swap(arr[i], max);
        }
    }

    cout << "Max: " << max << "\n";
}

void SortChar(char arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}

void ChangeChar(char arr[])
{
    int d;
    char val;

    cout << "Element in array: " << "\n";
    cin >> d;

    cout << "Value to change: " << "\n";
    cin >> val;

    arr[d + 1] = val;
}