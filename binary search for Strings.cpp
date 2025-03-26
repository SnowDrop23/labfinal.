#include <iostream>
//#include <vector>
using namespace std;

int binarySearch(string arr[], int size, string value)
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
	string ch;
	cout << "Enter size of the sorted array: ";
	cin >> n;
   
	string A[n];
	cout << "Enter array elements: ";
	for(int i = 0; i < n; i++) cin >> A[i];
	cout << "Enter element to search: ";
	cin >> ch;
	
	int index = binarySearch(A, n, ch);
    if(index != -1)
       cout << "Element found at position: " << index + 1 << endl;
    else
       cout << "Element not found." << endl;
}
