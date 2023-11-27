#include"boblesorting.h"

void bobuleSorting::bubbleSorting(int arr[], int size)
{
	{
		bool isSawped = false;
		for (int i = size - 1; i > 0; i--) {
			for (int j = 0; j < i; j++) {
				if (arr[j] > arr[j + 1]) {
					isSawped = true;
					sawapedfunc(arr, j);
				}
			}
			if (!isSawped) {
				break;
			}
		}


	}
}

void bobuleSorting::sawapedfunc(int arr[], int j)
{
	{
		int temp = arr[j];
		arr[j] = arr[j + 1];
		arr[j + 1] = temp;
	}
}
