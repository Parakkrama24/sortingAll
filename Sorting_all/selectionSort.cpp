#include "selectionSort.h"

void selectionSort::selectionsort_(int a[], int n)
{
	{
		for (int i = 0; i < n - 1; i++)
		{
			int minIndex = i;
			for (int j = i + 1; j < n; j++)
			{
				if (a[j] < a[minIndex]) {
					minIndex = j;
				}
			}
			if (minIndex != i) {
				swap(a[minIndex], a[i]);
			}
		}
	}
}
