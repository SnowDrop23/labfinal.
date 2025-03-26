#include <iostream>
//#include <vector>
using namespace std;

int binarySearch(char arr[], int size, char value)
{
	int start = 0, end = size-1;
	while(start <= end)
	{
		int mid = start + (end-start)/2;
		if(arr[mid] == value) return mid;
		else if(arr[mid] < value) start = mid+1;
		else end = mid-1;
	}
	return -1;

}
int main()
{
	int n;
	char ch;
	cout << "Enter size of the sorted array: ";
	cin >> n;
   
	char A[n];
	cout << "Enter array elements: ";
	for(int i = 0; i < n; i++) cin >> A[i];
	cout << "Enter element to search: ";
	cin >> ch;
	cout << binarySearch(A, n, ch)+1;
}
