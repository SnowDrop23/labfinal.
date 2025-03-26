#include <iostream>
//#include <vector>
using namespace std;

void printArray(char arr[], int size)
{
	for(int i = 0; i < size; i++) cout << arr[i] << " ";
	cout << endl;
}

void bubbleSort(char arr[], int size)
{
	for (int i = 0; i < size-1; i++)
	{
		for(int j = 0; j < size-1-i; j++)
		{
			if(arr[j] < arr[j+1]) swap(arr[j], arr[j+1]); //changes the condition only makes it descending to ascending order
		}
	}
	
}
int main()
{
	int n;
	
	cout << "Enter size of the sorted array: ";
	cin >> n;
   
	char A[n];
	cout << "Enter array elements: ";
	for(int i = 0; i < n; i++) cin >> A[i];
	bubbleSort(A, n);
	printArray(A, n);
	

}
