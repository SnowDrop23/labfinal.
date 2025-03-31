#include<iostream>
using namespace std;

void printArray(int arr[], int n)
{
	cout << "After sorting: ";
	for(int i = 0; i < n; i++) cout << arr[i] << " ";
}
void selectionSort(int arr[], int n)
{
	for(int i = 0; i < n-1; i++)
	{
		int largestIdx = i;
		for(int j = i+1; j < n; j++)
		{
			if(arr[j] > arr[largestIdx])
			    largestIdx = j;
		}
		swap(arr[i], arr[largestIdx]);
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
	
	selectionSort(arr, n);
	printArray(arr, n);
}
