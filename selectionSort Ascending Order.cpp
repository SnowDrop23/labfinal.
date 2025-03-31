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
		int smallestIdx = i;
		for(int j = i+1; j < n; j++)
		{
			if(arr[j] < arr[smallestIdx])
			    smallestIdx = j;
		}
		swap(arr[i], arr[smallestIdx]);
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
