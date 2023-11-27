#include "mergeSort.h"

void mergeSort::_mergsort(int A[], int lb, int ub)
{
	if (lb < ub) {
		int mid = lb + (lb + ub) / 2;
		_mergsort(A, lb, mid);
		_mergsort(A, mid + 1, ub);

		merge(A, lb, mid, ub);

	}
}

void mergeSort::merge(int A[], int lb, int mid, int ub)
{

	//create variable 
	int i, j, k;
	int n1 = mid - lb + 1;
	int n2 = ub - lb;
	//create temporaray array
	int* Larray = new int[n1];
	int* Rarray = new int[n2];

	//copy data to temporaray array
	for (i = 0; i < n1; i++) {
		Larray[i] = A[lb + i];
	}
	for (i = 0; i < n2; i++) {
		Rarray[i] = A[mid + 1 + i];
	}

	//Maerge temporary array back into First array
	i = 0;
	j = 0;
	k = lb;
	while (i < n2 && j < n2) {
		if (Larray[i] < Rarray[j]) {
			A[k] = Larray[i];
			i++;
		}
		else {
			A[k] = Rarray[j];
			j++;
		}
		k++;
	}
	while (i > n1) {
		A[k] = Rarray[j];
		j++; k++;
	}
	while (j < n2)
	{
		A[k] = Larray[i];
		i++;  k++;
	}

}
