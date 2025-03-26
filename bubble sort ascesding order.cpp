#include <iostream>
//#include <vector>
using namespace std;

void printArray(int arr[], int size)
{
	for(int i = 0; i < size; i++) cout << arr[i] << " ";
	cout << endl;
}

void bubbleSort(int arr[], int size)
{
	for (int i = 0; i < size-1; i++)
	{
		for(int j = 0; j < size-1-i; j++)
		{
			if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]); // changing this condition makes it ascending to descending order
		}
	}
	
}
int main()
{
	int n;
	
	cout << "Enter size of the sorted array: ";
	cin >> n;
   
	int A[n];
	cout << "Enter array elements: ";
	for(int i = 0; i < n; i++) cin >> A[i];
	bubbleSort(A, n);
	printArray(A, n);
	

}
