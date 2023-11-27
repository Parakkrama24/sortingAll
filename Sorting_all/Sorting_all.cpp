#include <iostream>
#include"boblesorting.h"
#include"selectionSort.h"
using namespace std;

void printArray(int arr[]) {
    for (int i = 0; i < 5; i++) {
        cout << arr[i] <<" | ";
    }
    cout << endl;
}
int main()
{
    bobuleSorting s;
    selectionSort s1;
    int n = 5;
    int* arr = new int[5];
    arr[0] = 45;
    arr[1] = 48;
    arr[2] = 4;
    arr[3] = 12;
    arr[4] = 150;
    printArray(arr);
    //s.bubbleSorting(arr,5);
    s1.selectionsort_(arr, 5);

    printArray(arr);
   
}


