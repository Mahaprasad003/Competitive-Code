/*
Insertion Sort
Time Complexity: O(N)

It is similar to inserting playing cards in a deck.
When you want to insert one card at a certain place, each card
has to move one direction forward.

It is efficient for small data values
It is adaptive in nature and is meant for datasets that
are somewhat already sorted

It takes maximum amount of time to sort if elements are in reverse.
Least time to sort iff elements are already sorted.
*/
#include<iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
	for(int i=1; i<n;i++)
	{
		int current = arr[i];
		int prev = i-1;

		//using this loop to find the right index where the element
		//current should be inserted
		while(prev >=0 && arr[prev] > current)
		{
			arr[prev+1] = arr[prev];
			prev -= 1;
		}
		arr[prev+1] = current;
	}
}

int main()
{
	int arr[] = {-20, 8, 5, 45, -88, 56, 10, 45};
	int n = sizeof(arr)/ sizeof(int);

	insertionSort(arr,n);
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	
}