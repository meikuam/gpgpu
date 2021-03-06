		
#include <bits/stdc++.h> 
using namespace std; 

void printArr(int a[],int n) 
{ 
	for (int i=0; i<n; i++) 
		cout << a[i] << " "; 
	printf("\n"); 
} 

void heapPermutation(int a[], int size, int n) 
{ 
	if (size == 1) 
	{ 
		printArr(a, n); 
		return; 
	} 

	for (int i=0; i<size; i++) 
	{ 
		heapPermutation(a,size-1,n); 

		if (size%2==1) 
			swap(a[0], a[size-1]); 

		else
			swap(a[i], a[size-1]); 
	} 
} 

int main() 
{
	int n = 10;
	int *a = new int[n];
	for (int i=0; i<n; i++)
		a[i] = i;	
	heapPermutation(a, n, n); 
	return 0; 
} 

