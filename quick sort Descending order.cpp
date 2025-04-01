#include<iostream>
using namespace std;

void printArray(int arr[], int n)
{
	cout << "After sorting: ";
	for(int i = 0; i < n; i++) cout << arr[i] << " ";
}

int partition(int arr[], int lb, int ub)
{
	int pivot = arr[lb];
	int start = lb;
	int end = ub;

	while(start < end)
	{
		while(arr[start] >= pivot) start++; // changed this condition to make descending order
		while(arr[end] < pivot) end--; // changed this condition to make descending order

		if(start < end) swap(arr[start], arr[end]);
	}
	swap(arr[lb], arr[end]);
	return end;
}

void quickSort(int arr[], int lb, int ub)
{
	if(lb < ub)
	{
		int location = partition(arr, lb, ub);

		quickSort(arr, lb, location-1);
		quickSort(arr, location+1, ub);
	}
}

int main()
{
	int n;
	cout << "Enter the size of array: ";
	cin >> n;

	int arr[n];
	cout << "Enter array elements: ";
	for(int i = 0; i < n; i++) cin >> arr[i];
	
	quickSort(arr, 0, n-1);
	printArray(arr, n);
}
