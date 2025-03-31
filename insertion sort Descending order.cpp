#include<iostream>
using namespace std;

void printArray(int arr[], int n)
{
	cout << "After sorting: ";
	for(int i = 0; i < n; i++) cout << arr[i] << " ";
}
void insertionSort(int arr[], int n)
{
	for(int i = 1; i < n; i++)
	{
		int curr = arr[i];
		int prev = i-1;
		
		while(prev >= 0 && arr[prev] < curr) //chamges this condition makes it descending to ascending order
		{
			arr[prev+1] = arr[prev];
			prev--;
		}
		arr[prev+1] = curr;
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
	
	insertionSort(arr, n);
	printArray(arr, n);
}
