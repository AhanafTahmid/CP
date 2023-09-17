// Optimized implementation of Bubble sort
#include <bits/stdc++.h>
using namespace std;

// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n)
{
	int i, j, numComp = 0, numInt = 0;
	bool swapped;
	for (i = 0; i < n - 1; i++) {
		swapped = false;
		for (j = 0; j < n - i - 1; j++) {
              	numComp++;
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				swapped = true;
				numInt++;
			}
		}

		// If no two elements were swapped
		// by inner loop, then break
		if (swapped == false){
			cout << "Number of Comparisons: " << numComp << "\nNumber of Interchange: " << numInt << "\n";
			break;
        }
	}
}

// Function to print an array
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++){
        if(i==0) cout<<arr[i];
        else cout << " " << arr[i];
    }
		
}

// Driver program to test above functions
int main()
{
	//char arr[] = "SIMPLE"; 
	int arr [] = { 44, 33, 11, 55, 77, 90, 40, 60, 99, 22, 88, 66 };
	int N = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, N);
	cout << "Sorted array: \n";
	printArray(arr, N);
	return 0;
}
// This code is contributed by shivanisinghss2110

