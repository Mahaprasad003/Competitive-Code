
/*
Bubble Sort -- Sorting algorithm

- The entire process is done "n-1" times.
- We start from 0th index to (n - 1 - i)th index in 1 based index
and (n - 2 - i) in 0-based indexing.

Time Complexity: O(N^2)
*/
#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
	for(int i=1; i <= n-1;i++)
	{
		for(int j=0; j <= n - i - 1; j++)
		{
			if(arr[j] > arr[j+1])
			{
				swap(arr[j], arr[j+1]);
			}
		}
	}

}



int main()
{
	int arr [] = {-2,3,4,-8,5,-3,-8,5,10,45,-20};
	int n = sizeof(arr)/sizeof(int);
	bubbleSort(arr,n);

	for(auto x : arr)
	{
		cout<< x <<" ";
	}
	
}