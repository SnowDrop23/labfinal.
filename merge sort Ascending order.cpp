#include<iostream>
using namespace std;


void printArray(int arr[], int n)
{
	cout << "After sorting: ";
	for(int i = 0; i < n; i++) cout << arr[i] << " ";
}

void merge(int arr[], int start, int mid, int end)
{
	int n = end - start + 1;
	int A[n];
	int a = 0;

	int i = start, j = mid+1;
	while(i <= mid && j <= end)
	{
		if(arr[i] <= arr[j]) A[a++] = arr[i++];
		
		else A[a++] = arr[j++];
	}

	while(i <= mid) A[a++] = arr[i++];
	while(j <= end) A[a++] = arr[j++];

	for(int b = 0; b < n; b++) arr[b+start] = A[b]; 
}
void mergeSort(int arr[], int start, int end)
{
	if(start < end)
	{
		int mid = start + (end - start)/2;

		mergeSort(arr, start, mid);
		mergeSort(arr, mid+1, end);

		merge(arr, start, mid, end);
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
	
	mergeSort(arr, 0, n-1);
	printArray(arr, n);
}
