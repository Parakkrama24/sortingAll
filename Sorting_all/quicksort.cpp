#include "quicksort.h"
#include<iostream>
using namespace std;

void quicksort::quickSort_(int arr[], int low, int high) {
	if (low > high) {
		return;
	}

	int pi = parttion_(arr, low, high);
	quickSort_(arr, low, pi - 1);
	quickSort_(arr, pi + 1, high);
}


int quicksort::parttion_(int arr[],int L,int H)
{
	int pivote = arr[H];
	int i = L - 1;

	for (int j = 0; j < H; j++)
	{
		if (arr[j] < pivote) {
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[H]);
}
