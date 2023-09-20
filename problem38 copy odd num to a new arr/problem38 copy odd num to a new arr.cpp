#include <iostream>
#include <cstdlib>
using namespace std;



int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

void fillArrWithRanNumbers(int arr[100], int& length)
{
    cout << "How many elements of the array?\n";
    cin >> length;

    for (int i = 0; i < length; i++)
        arr[i] = RandomNumber(1, 100);
}

void addArrayElement(int arr[100], int &length, int num)
{
    length++;
    arr[length - 1] = num;
}

void copyOddElementToNewArr(int arr1[100], int arr2[100], int length1, int &length2)
{
    for (int i = 0; i < length1; i++)
    {
        if (arr1[i] % 2 != 0)
        {
            addArrayElement(arr2, length2, arr1[i]);
        }
    }
}

void printArr(int arr[100], int length)
{
    cout << "Array Elements : ";

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], length, arr2[100], length2=0;
    fillArrWithRanNumbers(arr, length);
    printArr(arr, length);

    copyOddElementToNewArr(arr, arr2, length, length2);
    printArr(arr2, length2);


    return main();
}